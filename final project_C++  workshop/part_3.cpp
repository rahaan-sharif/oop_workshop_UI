//in this program, we use construction for making account(account number
//and password) and in function named "function", doing your instrucions.

#include <iostream>
using namespace std;

class account
{
private:
	int account_number; //this is for account number.
	int pass; //password
	long long int stock; //money in the account
	static int accounts[10];
	static int numbers;
	static account* objects[10];
public:
	account(int u): pass(1234), account_number(u), stock(100000000)
	{
		objects[numbers] = this;
		accounts[numbers++] = account_number;
	}

	//this funciton is used for adding money in wiring:
	void add_wire(int t_money)
	{
		stock += t_money;
	}

	void function()
	{
		int valid_code; //this is for verifing the password entered is correct.
		cout << "wellcome!\nplease enter your password: ";
		int temp;
		cin >> temp;
		for (int i = 0; i < 2 && temp != pass; i++)
		{
			cout << "worng password!\nenter again: ";
			cin >> temp;
		}
		if (pass == temp)
			valid_code = 1;
		else
		{
			valid_code = 0;
			cout << "wrong answer!\nyour card is not returnable.\n";
		}

		int continue_num = 1; //when the owner wants to end the operation, this will be 0.
		temp = 0;
		if (valid_code == 1)
		{
			while (continue_num !=0) 
			{
				cout << "choose your operation:\n";
				cout << "1. take stock" << endl;
				cout << "2. get money" << endl;
				cout << "3. wire money" << endl;  //cart be cart cardan e pool(persian)
				cout << "4. change password" << endl;
				cout << "0. end the progress" << endl;
				cin >> temp;
				cout << endl << endl;
				switch (temp) 
				{
				case 1:
					take_stock();
					break;
				case 2:
					get_money();
					break;
				case 3:
					wire_money();
					break;
				case 4:
					change_password();
					break;
				case 0:
				{
					cout << "goodbye!\n";
					return;
				}
				}
			}
		}

	}
	void get_money()
	{
		cout << "***\n***\n";
		int temp;
		cout << "how much money do you want: " << endl;
		cin >> temp;
		while (temp % 5 > 0)
		{
			cout << "error. this is not devidable by 5." << endl;
			cout << "how much money do you want: ";
			cin >> temp;
		}

		//this variables are for knowing number of each banknote.
		int banknote[5][2] = { {5000,0}, {10000,0}, {50000,0}, {100000,0}, {200000,0} };
		if (stock>temp) 
		{
			stock -= temp;
			for (int i = 4; i >=0; i--)
			{
				while ((temp / banknote[i][0]) > 0)
				{
					banknote[i][1] += temp / banknote[i][0];
					temp /= banknote[i][0];
				}
			}
		}
		else
		{
			cout << "you don't have enough balance.\n";
			return;
		}

		cout << "the ATM will give this banknotes: \n";
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << "  "<<banknote[i][j];
				if (j == 0)
					cout << "  \t:\t";
			}
			cout << endl;
		}
		cout << "__________" << endl << endl;
		return;
	}
	void take_stock()
	{
		cout << "***\n***\n";
		
		cout << "your stock: " << stock << endl;
		cout<<"__________" << endl << endl;
	}
	void wire_money()
	{
		cout << "***\n***\n";
		int t_account_number, t_money, valid_code=0;
		//valid code is for varifing thers account number.

		cout << "enter destination account number: ";
		cin >> t_account_number;
		cout << "enter the amount of money: ";
		cin >> t_money;

		for (int i = 0; i < numbers; i++)
			if (accounts[i] = t_account_number)
				valid_code = 1;
		if (!valid_code)
			return;

		stock -= t_money;

		int temp;
		for (int i = 0; i < numbers; i++)
			if (accounts[i] == t_account_number)
				temp = i;
		(objects[temp])->add_wire(t_money);
		cout << "operation done!\n";
		cout << "__________" << endl << endl;
	}
	void change_password()
	{
		cout << "***\n***\n";
		int temp;
		cout << "new password: ";
		cin >> temp;
		pass = temp;
		cout << endl << " *your new password: " << pass << endl;
		cout << endl << endl << "__________" << endl;
	}
};
account* account::objects[10] = { nullptr };
int account::accounts[10] = {0,0,0,0,0,0,0,0,0,0};
int account::numbers = 0;

int main(void)
{
	account ob[10] = { account(0), account(1), account(2), account(3), account(4),
					   account(5), account(6), account(7), account(8), account(9) };

	//we do the operation for ob[0]. we can do it with any other accounts.
	ob[0].function();

	return 0;
}