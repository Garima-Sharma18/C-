#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int b=20;
    cout<<"Before Swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"After Swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}