#include <iostream>
#include <time.h>
using namespace std;

void printing(int[], int);
void histogram(int[], int);

int main(void)
{
	srand(time(0));
	cout << "in this program, we create random integer.";
	cout << "our integers are: \n";

	int enterence[10] = { 0 };
	for (int i = 0; i < 10; i++)
		enterence[i] = rand()%10;

	for (int i = 0; i < 10; i++)
		cout << enterence[i] << ", ";
	cout << "\b\b \n\n\n";

	printing(enterence, 10);
	cout << endl << endl << endl;

	histogram(enterence, 10);
	cout << endl << endl << endl;


	return 0;
}

void printing(int a[], int n)
{
	cout << "**** " << endl;
	cout << "reverse printing:\n";
	for (int i = n - 1; i >= 0; i--)
		cout << a[i] << ", ";
	cout << "\b\b \n";

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	cout << "sum: " << sum << endl;
	cout << "end of function \"printig()\"" << endl;
	cout << "**** " << endl;
	
}

void histogram(int a[], int n)
{
	cout << "element          value             histogram" << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<"  " << i << "                " << a[i] << "                ";
		for (int j = 0; j < a[i]; j++)
			cout << "*";
		if (a[i] == 0)
			cout << "NULL";
		cout << endl;
	}
	cout << endl << "end of functoin" << endl << "***" << endl;
}









