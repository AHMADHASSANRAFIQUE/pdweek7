#include <iostream>
#include <iomanip>
using namespace std;

void vehiclecargo(int number);

main()
{
    int number;
    cout << "Enter the count of cargo for transportation: ";
    cin >> number;
    vehiclecargo(number);
}

void vehiclecargo(int number)

{
    int weight, totalweights;
    float smallB = 0, truckss = 0, trainss = 0, smallBper, truckssper, trainssper, average;

    for (int x = 1; x <= number; x++ )
    {
        cout << "Enter the tonnage of cargo " << x<< ": ";
        cin >> weight;
        if (weight <= 3 )
        {
            smallB = smallB + weight;
        }
        if (weight > 3 && weight <= 11 )
        {

            truckss = truckss + weight;
        }
        if (weight > 11 )
        {
            trainss = trainss + weight;
        }
    }


    totalweights = trainss + truckss + smallB ;
    trainssper = (trainss / totalweights) * 100;
    truckssper = (truckss / totalweights) * 100;
    smallBper = (smallB / totalweights) * 100;
    
    average = (smallB * 200 + truckss * 175 + trainss * 120) /totalweights;

    cout << fixed << setprecision(2)<< average <<endl;
    cout << fixed << setprecision(2)<< smallBper <<"%"<<endl;
    cout << fixed << setprecision(2)<< truckssper <<"%"<<endl;
    cout << fixed << setprecision(2)<< trainssper <<"%";

}