#include <iostream>
using namespace std;
void binary_search(int [], int , int, int, int);
int main(void)
{
	int enterence[10] = { 0 };
	cout << "our array has 10 elements" << endl;
	cout << "please insert lelements of the array: \n";
	for (int i = 0; i < 10; i++)
		cin >> enterence[i];
	cout << "enter your number:\n";
	int s = 0;
	cin >> s;

	for (int i = 0; i < 10; i++)
		cout << i << "  ";
	cout << endl;
	for (int i = 0; i < 30; i++)
		cout << "=";
	cout << endl;

	binary_search(enterence, 0, 9, s, 10);
	
	return 0;
}

void binary_search(int a[], int f, int r, int number, int length)
{
	int location = (f + r) / 2;
	for (int i = 0; i < length; i++)
	{
		if ((i < f) || (i > r))
			cout << "   ";
		else
			cout << a[i] << "  ";
		if (i == location)
			cout << "\b\b* ";
	}
	cout << endl;

	if (a[location] == number)
	{
		cout << "location of this element is: " << location << endl;
		return;
	}
	else
	{
		if ((a[f] > number) || (a[r] < number))
		{
			cout << "we didn't find anything!\n";
			return;
		}
		else if (a[location] > number)
			binary_search(a, f, location-1, number, length);
		else if (a[location] < number)
			binary_search(a, location+1, r, number, length);
	}
	return;
}