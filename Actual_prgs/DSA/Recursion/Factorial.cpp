//Finding factorial of a number using a recurive function
#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (num==0) return 1;
    else return num*factorial(num-1);
}

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"The factorial of the number "<<number<<" is "<<factorial(number);
}