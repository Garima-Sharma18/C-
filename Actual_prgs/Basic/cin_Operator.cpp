#include<iostream>

using namespace std;

int main()
{
    /*
    cout<<"Enter a numeric value: ";
    int value;
    cin>>value;
    cout<<value;
    */
   double temperature;
   cout<<"Enter Temperature in Fahrenheit: ";
   cin>>temperature;
   cout<<"Temperature in celsius: "<<(temperature - 32)/1.8;
}