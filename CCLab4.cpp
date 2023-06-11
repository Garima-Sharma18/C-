#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;

bool isPunctuator(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
        ch == '&' || ch == '|')
        {
            return true;
        }
    return false;
}

bool isDelimiter(char ch)
{
    if (ch == ',' || ch == ';' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
        ch == '&' || ch == '|')
    {
        return true;
    }
    return false;
}

bool isIdentifier(string str) 
{
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9' || isDelimiter(str[0]) == true)
    {
        return false;
    }
    int i,len = str.length();
    if (len == 1)
    {
        return true;
    }
    else
    {
        for (i = 1 ; i < len ; i++)
        {
            if (isDelimiter(str[i]) == true)
            {   
                return false;
            }
        }
    }
    return true;
}

bool isKeyword(string str)
{
    if (!str.compare( "void") || !str.compare("main")
        || !str.compare( "int") || !str.compare( "float")
        || !str.compare( "scanf") || !str.compare( "printf")
        || !str.compare( "if") || !str.compare( "else")
        || !str.compare( "while") || !str.compare( "do")
        || !str.compare( "break") ||  !str.compare( "continue")
        || !str.compare( "return") || !str.compare( "switch") || !str.compare( "case")
        || !str.compare( "char") || !str.compare( "long") )
    {
        return true;
    }
    return false;
}

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == '>' || ch == '<' ||
        ch == '=' || ch == '|' || ch == '&')
    {
       return true;
    }
    return false;
}

bool isConstant(string str)
{
    int i, len = str.length(),numOfDecimal = 0;
    if (len == 0)
    {
        return false;
    }
    for (i = 0 ; i < len ; i++)
    {
        if (numOfDecimal > 1 && str[i] == '.')
        {
            return false;
        } 
        else if (numOfDecimal <= 1)
        {
            numOfDecimal++;
        }
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9' || (str[i] == '-' && i > 0))
        {
            return false;
        }
    }
    return true;
}

char* subString(string realStr, int l, int r)
{
    int i;
    char* str = (char*) malloc(sizeof(char) * (r - l + 2));
    
    for (i = l; i <= r; i++)
    {
        if (realStr[i]=='"')
        {
            while (realStr[++i]!='"')
            {   
                str[i - l] = realStr[i];
                str[r - l + 1] = '\0';
            }
        }
        else    
        {
            str[i - l] = realStr[i];
            str[r - l + 1] = '\0';
        }
    }
    return str;
}

void parse(string str)		
{
    int left = 0, right = 0;
    int len = str.length();
    while (right <= len && left <= right)
    {
        if (isPunctuator(str[right]) == false)
        {
            right++;
        }

        if (isPunctuator(str[right]) == true && left == right)
        {
            if (isOperator(str[right]) == true)
                cout<< str[right] <<" IS AN OPERATOR\n";
            else if(isDelimiter(str[right]==true))
                cout<< str[right] <<" IS AN DELIMITER\n";
            right++;
            left = right;
        } 
        else if (isPunctuator(str[right]) == true && left != right || (right == len && left != right))
        {
            char* sub = subString(str, left, right - 1);

            if (isKeyword(sub) == true)
            {
                cout<< sub <<" IS A KEYWORD\n";
            }
            else if (isConstant(sub) == true)
            {
                cout<< sub <<" IS A CONSTANT\n";
            }
            else if (isIdentifier(sub) == true && isPunctuator(str[right - 1]) == false)
            {
                cout<< sub <<" IS A VALID IDENTIFIER\n";
            }
            else if (isIdentifier(sub) == false && isPunctuator(str[right - 1]) == false)
            {
                cout<< sub <<" IS NOT A VALID IDENTIFIER\n";
            }

            left = right;
        }
    }
    return;
}

int main()
{
    ifstream file ("sample.txt");
    string line;
    cout<<endl;
    if (file.is_open()) 
    {
        while (getline(file, line)) 
            parse(line);
        file.close();    
    }
    else
        cout << "Unable to open file" << endl;
    return 0;
}
