#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string enterence;
    int loc1=-1, loc2=-1, loc3=-1;
    int a=-1, b=-1;
    char ch=-1;

    while(enterence[0]!='d')
    {
        getline(cin, enterence);

        for(int i=0; i<100; i++)
        {
            if(enterence[i]==0)
            {
                loc3=i;
                break;
            }
            if(enterence[i]==' ')
            {
                loc1=loc2;
                loc2=i;
            }
        }

        a=0;
        for(int i=0; i<loc1; i++)
            a=(a*10)+(enterence[i]-48);

        ch=enterence[loc1+1];

        b=0;
        for(int i=(loc2+1); i<loc3; i++)
            b=(b*10)+(enterence[i]-48);


        cout << "answer: ";
        switch(ch)
        {
        case '+':
            cout<<a+b<<endl;
            cout << "---\n";
            break;
        case '-':
            cout<<a-b<<endl;
            cout << "---\n";
            break;
        case '*':
            cout<<a*b<<endl;
            cout << "---\n";
            break;
        case '/':
            cout<<(float)a/b<<endl;
            cout << "---\n";
            break;
        default:
            {
                if(enterence[0]!='d')
                {
                    cout<<"error! no such operation.\n";
                    cout << "---\n";
                    break;
                }
                else
                {
                    cout<<"end of program\n\n";
                    cout << "---\n";
                    break;
                }
            }
        }


    }





    return 0;
}
