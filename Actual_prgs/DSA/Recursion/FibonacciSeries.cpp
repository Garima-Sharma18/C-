#include <bits/stdc++.h>
using namespace std;

int fibonacciSeries(int n)
{
    if (n==1) return 1;
    if (n==2) return 1;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}

int main()
{
    int num;
    cin>>num;
    cout<<fibonacciSeries(num);
}