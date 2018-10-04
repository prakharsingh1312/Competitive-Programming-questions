#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("cls");
    cout << "Creating all combinations using the numbers 1,2 and 3 \n" << endl;
    for(int a=1; a<=3; a++)
    {
        for(int b=1; b<=3; b++)
        { 
            for(int c=1; c<=3; c++)
            {
                cout<<a<<b<<c<<endl;
            }
        }
    }
    return 0;
}
