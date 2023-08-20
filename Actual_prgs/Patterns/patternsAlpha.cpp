#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) //14
{
    for (int i=0;i<n;i++)
    {
        char ch='A';
        for (int j=0;j<=i;j++)
            cout<<ch++<<" ";
        cout<<endl;
    }
}

void pattern1rev(int n) //15
{
    for (int i=n;i>=1;i--)
    {
        char ch='A';
        for (int j=0;j<i;j++)
            cout<<ch++<<" ";
        cout<<endl;
    }
}

void pattern2(int n) //16
{
    char ch = 'A';
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<=i; j++)
            cout<<ch<<" ";
        ch++;
        cout<<endl;
    }
}

void pattern3(int n) //17
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
            cout<<" ";
        char ch ='A';
        int breakpt = (2*i+1)/2;
        for (int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if (j<=breakpt) ch++;
            else ch--;
        }
        for (int j=0;j<n-i-1;j++)
            cout<<" ";
        cout<<endl;
    }
}

void pattern4(int n) //18
{
    for (int i=0;i<n;i++)
    {
        char ch='A'+n-1;
        for (int j=0;j<=i;j++)
        {
            cout<<ch--<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int N) //19
{
    int iniS = 0;
    for(int i=0;i< N;i++){
        for(int j=1;j<=N-i;j++){
            cout<<"*";
        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=1;j<=N-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
    iniS = 2*N -2;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
    }
}

void pattern6(int n) //20
{
    int space = 2*n-2;
    for (int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if (i>n) stars=2*n-i;
        for (int j=1; j<=stars;j++)
            cout<<"*";
        for (int j=1;j<=space;j++)
            cout<<" ";
        for (int j=1; j<=stars;j++)
            cout<<"*";
        cout<<endl;
        if (i<n) space-=2;
        else space+=2;
    }
}

void pattern7 (int n) //21
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n) //22
{
    for (int i=0;i<2*n-1;i++)
    {
        for (int j=0;j<2*n-1;j++)
        {
            int top = i, left=j;
            int bottom = 2*(n-1)-i;
            int right = 2*(n-1)-j;
            cout<<n-min(min(top,bottom), min(left, right));
        }
        cout<<endl;
    }
}

int main()
{
    int n=5;
    cout<<"Pattern14\n";
    pattern1(n);
    cout<<"\nPattern15"<<endl;
    pattern1rev(n);
    cout<<"\nPattern16"<<endl;
    pattern2(n);
    cout<<"\nPattern17"<<endl;
    pattern3(n);
    cout<<"\nPattern18"<<endl;
    pattern4(n);
    cout<<"\nPattern19"<<endl;
    pattern5(n);
    cout<<"\nPattern20"<<endl;
    pattern6(n);
    cout<<"\nPattern21"<<endl;
    pattern7(n);
    cout<<"\nPattern22"<<endl;
    pattern8(n);
}