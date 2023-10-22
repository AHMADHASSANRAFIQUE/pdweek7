#include<iostream>
using namespace std;
int triangle(int num);
main()
{
    int num;
    cout<<"Enter number of Triangle: ";
    cin>>num;
    int result = triangle(num);
    cout<<"Dots in the Triangle: "<<result;
}

int triangle(int num)
{
    int total = 0;
    for(int x = 1; x<=num; x++)
    {
        total=total+x;
    }
    return total;
}