#include<iostream>
using namespace std;
void amplifier(int number);
main()
{
    int number;
    cout<<"Enter the number to Amplify: ";
    cin>>number;
    amplifier(number);
}
void amplifier(int number)
{
    for(int x=1;x<=number;x++)
    {
        if(x % 4 == 0)
        {
            int y=x*10;
            cout<<y<<", ";
            x++;
        }
        cout<<x;
        if(x<number)
        {
            cout<<", ";
        }
    }
}