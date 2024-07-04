#include <iostream>
using namespace std;

class star
{
private:
	static int count;
public:
	star()
	{
		for (int i = 0; i <= count; i++)
			cout << "* ";
		cout << endl;
		count++;
	}
};

int star::count = 0;

int main(void)
{
	star ob1, ob2, ob3, ob4;


	return 0;
}