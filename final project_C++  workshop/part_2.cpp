#include <iostream>
using namespace std;

class students
{
public:
	//we get ent as number of  students in the class.
	students(int ent)
	{
		float* grades = new float[ent];
		for (int i = 0; i < ent; i++)
		{
			cout << "enter grade " << i << " : ";
			cin >> grades[i];
		}

		float temp = -1;
		for (int i = 0; i < ent; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (grades[i] < grades[j])
				{
					temp = grades[i];
					grades[i] = grades[j];
					grades[j] = temp;
				}
			}
		}

		for (int i = 0; i < ent; i++)
			cout << grades[i] << endl;
		

	}
};

int main(void)
{
	students ob(10);



	return 0;
}