#include <iostream>
using namespace std;

//in unions, we have a plate of memory 
//that all variables use it. this is 
//usefull for embeded systems that we
//don't have a large memory.


union m
{
	int a;
	char b;
};

int main(void)
{
	m ob;
	ob.b =65 ;
	cout << "a: " <<ob.a << endl;
	cout << "b: " << ob.b << endl;

	cout << endl << endl;

	ob.a = 65;
	cout << "a: " << ob.a << endl;
	cout << "b: " << ob.b << endl;



	return 0;
}