#include <bits/stdc++.h> 
using namespace std;

void subSet(vector <int> &v, int i, vector<int> &temp, vector<vector<int>> &ans)
{
    if (i==v.size())
        ans.push_back(temp);
    else 
    {
        subSet(v, i+1, temp,ans);
        temp.push_back(v[i]);
        subSet(v, i+1, temp, ans);
        temp.pop_back();//very important backtack to keep the temp same as before
    }
}

vector<vector<int>> pwset(vector<int> &v)
{
    vector<vector<int>> ans;
    vector <int> temp;
    subSet(v, 0, temp, ans);
    return ans;
}

int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    vector<vector<int>> ans;
    ans = pwset(v);
    for (auto x: ans)
    {
        cout<<"{";
        for (auto y: x)
            cout<<y<<" ";
        cout<<"}"<<endl;
    }
    cout<<endl;
}