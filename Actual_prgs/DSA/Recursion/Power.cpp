#include <bits/stdc++.h>
using namespace std;

long long Power1(int X, int N) //O(n): Time; O(n): Space;
{
    if (N==0) return 1;
    return Power1(X, N-1);
}

long long Power(int X, int N)
{
    if (N==0) return 1;
    long long temp = Power(X, N/2);
    if (N%2==1) return temp*temp*X;
    return temp*temp;
}

int main()
{
    int x, n;
    cin>>x>>n;
    long ans = Power(x,n);
    cout<<ans;
}