#include<iostream>
using namespace std;
bool prime(int n1);
int allprime(int n1);
main()
{
    int n1;
    cout<<"Enter Number: ";
    cin>>n1;
    int output = allprime(n1);
    cout<<output;
}
bool prime(int n1)
{
    int number = 0;
    for(int x=1 ; x<=n1 ; x++)
    {
        if(n1 % x == 0)
        {
            number++;
        }
    }
    if(number == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }       
}
int allprime(int n1)
{
    int counting = 0, x = 1, sum = 1;
    while(counting < n1)
    {
        if(prime(x))
        {
            counting=counting+1;
            sum=sum * x;
        }
        x++;
    }
    return sum;
}