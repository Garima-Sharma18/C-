//Find 2 elements in a vector that can give a specific sum.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v={2,4,3,1,7,11};
    int start=0, end=v.size()-1;
    int target_sm=10;
    sort(v.begin(),v.end());
    while (start<end)
    {
        int sm=v[start]+v[end];
        if (sm==target_sm)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if (sm<target_sm)
            start++;
        else
            end--;
    }
    if (start>end)
        cout<<"NO";
}