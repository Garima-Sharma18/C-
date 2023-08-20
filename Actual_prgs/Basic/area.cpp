#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter radius: ";
    double radius;
    cin>>radius;
    const double pi = 3.14;
    double area = pi*pi*radius;
    cout<<"Area: "<<area;
    return 0;
}