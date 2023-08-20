#include<bits/stdc++.h>
using namespace std;

int sumOfNTerms(int n)
{
    if (n==1) return n;
    return n+sumOfNTerms(n-1);
}

int main()
{
    int num;
    cin>>num;
    cout<<sumOfNTerms(num);
}