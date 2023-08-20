//Add same elements at the end of the vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    int size=v.size();
    for (int i=0;i<size;i++)
        v.push_back(v[i]);
    for (int i=0;i<v.size();i++)
        cout<<v[i];
}