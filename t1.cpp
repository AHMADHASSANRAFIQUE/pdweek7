#include<iostream>
using namespace std;
void stars(int rows);
main()
{
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    stars(rows);
}
void stars(int rows)
{
    for(rows ; rows>=1 ; rows--)
    {
        for(int y=1 ; y<=rows ; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}