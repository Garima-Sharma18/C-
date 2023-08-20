#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";
    string str="";
    for (int i=0;i<s.length();i++)
    {
        if (isalpha(s[i])==true)
            str += tolower(s[i]);
        else
            continue;
    }
    cout<<str<<endl;
    int start=0, end=str.length()-1;
    while (start<=end)
    {
        if (isalpha(str[start])==false)
            cout<<s[start++]<<endl;
        else if (isalpha(str[end])==false)
            cout<<s[end--]<<endl;
        else
        {
            if (str[start]!=str[end])
            {
                cout<<"No";
                break;
            }
            else
            {
                start++;
                end++;
            }
        }
    }
    if (start>end)cout<<"Yes a pallindrome!";
    return 0;
}