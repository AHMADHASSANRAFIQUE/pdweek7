#include<iostream>
using namespace std;
string examine(int visit);

main()
{
    int visit;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>visit;
    cout<<examine(visit);
}

string examine(int visit)

{
    int number, treat = 0, untreat = 0, doc = 7;

    for (int x = 1; x <= visit; x++)
    {
        cout << "Number of patients who visited hospital on Day " << x << ": ";
        cin >> number;
        if (x % 3 == 0 && (treat < untreat))
        {
            doc++;
        }
        if (number <= doc)
        {
            treat = treat + number;
        }
        else
        {
            treat = treat + doc;
            untreat = untreat + (number - doc);
        }
    }

    return "Treated Patients: " + to_string(treat) + "\nuntreated Patients: " + to_string(untreat); 

}

