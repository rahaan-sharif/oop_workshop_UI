#include <iostream>
using namespace std;
#define tool 5

struct student
{
	char name[20];
	int grade[3];
};
void function1(student ob[], int count)
{
	cout << "       <<function1>> " << endl << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "student " << i+1 << ": \n";
		cout << "  name: ";
		cin >> ob[i].name;
			for (int j = 0; j < 3; j++)
			{
				cout << "       grade " << j+1 << ": ";
				cin >> ob[i].grade[j];
			}
		cout << "______" << endl;
	}

	cout << "*****\n*****" << endl<<endl<<endl;
}

void function2(student ob[], int counter)
{
	cout << "       <<function2>> " << endl << endl;
	cout << "num\t\t\tname\t\t\tgrade1\t\t\tgrade2\t\t\tgrade3\n";
	cout << "-----------------------------------------------------";
	cout <<	"-----------------------------------------------------\n";
	for (int i = 0; i < counter; i++)
	{
		cout << " " << i + 1 << "\t\t\t";
		cout << ob[i].name<<"\t\t\t";
		for (int j = 0; j < 3; j++)
		{
			cout << ob[i].grade[j] << "\t\t\t";
		}
		cout << endl;
	}
	cout << "\n*****\n*****" << endl << endl << endl;
}

int main(void)
{
	struct student ob[tool];
	function1(ob, tool);
	function2(ob, tool);


	return 0;
}