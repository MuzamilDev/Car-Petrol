#include<iostream>
using namespace std;

int main()
{

    float distance,liters=12.5;

    cout<<"Enter The Distance You want to know about your petrol consumption: "<<endl;
    cin>>distance;

    liters=distance/liters;

    cout<<"You should fill the tank with "<<liters<<" liters"<<endl;
    cout<<"Note! Your car speed should be at Average "<<endl;

    return 0;
}
