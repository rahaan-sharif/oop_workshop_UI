#include <iostream>
using namespace std;

void funct1(int[], int);
void funct2(int[], int);

int main(void)
{
	int a[] = { 1,2,3,4,5,6,7 };
	funct1(a, 7);
	funct2(a, 7);


	return 0;
}

void funct1(int a[], int length)
{
	cout << "funct1:\n";
	int* pta;
	pta = a + length - 1;
	for (int i = 0; i < length; i++)
		cout << pta[-i] << ", ";
	cout << "\b\b \n";
	cout << "----------\n\n";
}

void funct2(int a[], int length)
{
	cout << "funct2:\n";
	int* pta1=a, * pta2=a+length-1, sum=0, i=0;
	for (i = 0; pta1[i] != pta2[-i]; i++)
		sum += pta1[i] + pta2[-i];
	sum += pta1[i];
	cout << "sum: " << sum << endl;
	cout<< "----------\n\n";
}
