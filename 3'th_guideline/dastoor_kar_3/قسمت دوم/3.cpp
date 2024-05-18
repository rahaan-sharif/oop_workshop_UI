#include <iostream>
#include <time.h>
using namespace std;

void function(int[][4], int);

int main(void)
{
	int enterence[10][4] = {0};
	for (int i = 0; i < 10; i++)
		for(int j=0; j<4; j++)
			enterence[i][j] = rand()%10;
	cout << "my array: \n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << enterence[i][j] << ", ";
		cout << "\b\b \n";
	}
	cout << endl << endl;
	cout << "which line do you like to be printed? ";
	int line = 0; 
	cin >> line;
	cout<< "funcion: \n";
	function(enterence,line);
	cout << endl << endl;

	return 0;
}

void function(int a[][4], int line)
{
	for (int i = 0; i < 4; i++)
		cout << a[line][i] << ", ";
	cout << "\b\b ";
}