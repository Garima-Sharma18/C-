//Merging 2 sorted arrays
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2,i,j;
    cin>>size1>>size2;
    int arr1[size1], arr2[size2];
    for (i=0;i<size1;i++)
        cin>>arr1[i];
    for (j=0;j<size2;j++)
        cin>>arr2[j];
    i=0,j=0;
    int size=size1+size2,k;
    int soln[size];
    for (k=0;k<size;k++)
    {
        if (i<size1 && j<size2)
        {
            if (arr1[i]<arr2[j])
                soln[k]=arr1[i++];
            else
                soln[k]=arr2[j++];
        }
        else if(i=size1)
            soln[k]=arr2[j++];
        else
            soln[k]=arr1[i++];
    }
    cout<<"\nPRINTING THE MERGED ARRAY:"<<endl;
    for (k=0;k<size;k++)
        cout<<soln[k]<<" ";
}