#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr;
    arr.push_back(1);
    arr.emplace_back(2);

    vector <pair <int, int>> arr2;
    arr2.push_back({1,2});
    arr2.emplace_back(1,2);

    vector <int> v100(5,100);
    vector <int> v(5);
    vector <int> v1(5,20);
    vector <int> v2(v1);

    vector <int> :: iterator it = v1.begin();
    it++;
    cout<<*(it)<<endl;

    vector <int> :: iterator it = v1.end();
}