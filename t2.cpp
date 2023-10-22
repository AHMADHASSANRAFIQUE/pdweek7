#include<iostream>
using namespace std;
void halfstars(int rows);
main()
{
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    halfstars(rows);
}
void halfstars(int rows)
{
    for(int r1=1 ; r1<=rows ; r1++)
    {
    for(int y=1 ; y<=rows-r1 ; y++)
    {
        cout<<" ";
    }
     for(int x=1 ; x<=r1 ; x++)
     {
         cout<<"*";
     }
    cout<<endl;
    }
    for(int r1=rows ; r1>=1 ; r1--)
    {
    for(int y=1 ; y<=rows-r1 ; y++)
    {
        cout<<" ";
    }
     for(int x=1 ; x<=r1 ; x++)
     {
         cout<<"*";
     }
    cout<<endl;
    }
}