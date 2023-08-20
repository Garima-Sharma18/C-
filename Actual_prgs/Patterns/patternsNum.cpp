#include<iostream>
using namespace std;

void pattern1(int n) //1
{
    for (int i=0;i<n;i++)
	{
		for (int j=0; j<n; j++) 
        	cout<<"* ";
		cout<<endl;
	}
}

void pattern2(int n) //2
{
    for (int i=1;i<=n;i++)
    {
        for (int j=0; j<i;j++)
            cout<<'*';
        cout<<"\n";
    }
}

void pattern3(int n) //3
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
            cout<<j;
        cout<<"\n";
    }
}

void pattern4(int n) //4
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
            cout<<i;
        cout<<"\n";
    }
}

void pattern2rev(int n) //5
{
    for (int i=n;i>=1;i--)
    {
        for (int j=1; j<=i;j++)
            cout<<'*';
        cout<<"\n";
    }
}

void pattern3rev(int n) //6
{
    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
            cout<<j;
        cout<<"\n";
    }
}

void pattern5(int n) //7
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
            cout<<" ";
        for (int j=1;j<=2*i+1;j++)
        {   
            cout<<"*";
        }
        for (int j=0;j<n-i-1;j++)
            cout<<" ";
        cout<<endl;
    }
}

void pattern5rev(int n) //8
{
    for (int i=n;i>0;i--)
    {
        for (int j=0; j<n-i-1;j++)
            cout<<" ";
        for (int j=0; j<=2*i+1;j++)
            cout<<"*";
        for (int j=0; j<n-i-1;j++)
            cout<<" ";
        cout<<endl;
    }
}

void pattern5_5rev(int n) //9
{
    pattern5(n);
    pattern5rev(n);
}

void pattern6(int n) //10
{
    for (int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if (i>n) stars=2*n-i;
        for (int j=1; j<=stars;j++)
            cout<<"*";
        cout<<endl;
    }
}

void pattern7(int n) //11
{
    for (int i=0; i<n;i++)
    {
        int start = 0;
        if (i%2==0) start=1;
        for (int j=0; j<=i;j++)
        {
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
}

void pattern8(int n) //12
{
    int space = 2*(n-1);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
            cout<<j;
        for (int j=1;j<=space;j++)
            cout<<" ";
        for (int j=i;j>=1;j--)
            cout<<j;
        space-=2;
        cout<<endl;
    }
}

void pattern9(int n) //13
{
    int num=1;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n=5;
    cout<<"Pattern 1 - \n";
    pattern1(n); 
    cout<<"\nPattern 2 - \n";
    pattern2(n); 
    cout<<"\nPattern 3 - \n";
    pattern3(n); 
    cout<<"\nPattern 4 - \n";
    pattern4(n); 
    cout<<"\nPattern 5 - \n";
    pattern2rev(n); 
    cout<<"Pattern 6 -\n";
    pattern3rev(n); 
    cout<<"\nPattern 7 - \n";
    pattern5(n); 
    cout<<"\nPattern 8 - \n";
    pattern5rev(n); 
    cout<<"\nPattern 9 - \n";
    pattern5_5rev(n); 
    cout<<"\nPattern 10 - \n";
    pattern6(n);
    cout<<"\nPattern 11 - \n";
    pattern7(n);
    cout<<"\nPattern 12- \n";
    pattern8(n);
    cout<<"\nPattern 13- \n";
    pattern9(n);
}