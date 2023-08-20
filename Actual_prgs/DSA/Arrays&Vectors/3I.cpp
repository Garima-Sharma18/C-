//Find 3 elements in a vector that can give a specific sum.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v={1,6,3,9,12,7};
    int start, end=v.size()-1;
    int target=10,target_sm,sm,i;
    sort(v.begin(),v.end());
    for (i=0;i<=end;i++)
    {
        target_sm=target-v[i];
        start = i;
        while (start<end)
        {
            sm = v[start]+v[end];
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
        if (sm==target_sm)
            break;
    }
    if (start>end)
        cout<<"NO";
}