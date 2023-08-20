#include<iostream>
using namespace std;

void Regex1(string str)
{
    int state = 0;
    string::iterator it;
    cout<<"\n";
    for(it = str.begin(); it!=str.end(); it++)
    {
        cout<<"-->";
        if (state == 0 && *it=='0')
        {
            state = 0;
            cout<<"0";
        }
        else if (state==0 && *it=='1')
        {
            state = 1;
            cout<<"1";
        }
        else if (state == 1 && *it=='0')
        {
            state = 3;
            cout<<"3";
        }
        else if (state==1 && *it=='1')
        {
            state = 2;
            cout<<"2";
        }
        else if(state == 2 && *it=='0')
        {
            state=3;
            cout<<"3";
        }
        else if(state==2 && *it=='1')
        {
            state=2;
            cout<<"2";
        }
        else
        {
            state=4;
            cout<<"4";
        }
    }
    if (state==2 || state==3)
        cout<<"\n\nThe str "<<str<<" is acceptable\n";
    else
        cout<<"\n\nThe str "<<str<<" is not acceptable\n";
}

int main()
{
    int choice = 0;
    while (choice!=3)
    {
        string str;
        cout<<"\n_________MENU__________"<<"\n\t1.Regular expression 1"<<"\n\t2.Regular expression 2\n"<<"\t3.Exit";
        cout<<"\nEnter the choice: ";
        cin >> choice;
        if (choice!=3)
        {    
            cout<<"\nEnter the possible string: ";
            cin >> str;
            switch (choice)
            {
                case 1:
                {
                    Regex1(str);
                    break;
                }
                case 2:
                {
                    cout<<"\nWorld";
                    //Regex2(str);
                    break;
                }
                case 3:
                {
                    cout<<"\nExit";
                    break;
                }
                default:
                    cout<<"\nWrong choice";
            }
        }
    else break;
    }
}