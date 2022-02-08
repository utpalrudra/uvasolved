#include <bits/stdc++.h>
using namespace std;

bool test_func(char *str)
{
    stack <char> mystack;
    int len = strlen(str);
    char c;
    for(int i=0; i<len; i++)
    {
        c = str[i];
        if(c == '(' || c == '[')
            mystack.push(c);
        else
        {
            if(mystack.empty())
                return false;
            if(c == ')' && mystack.top()!='(')
                return false;
            if(c == ']' && mystack.top()!='[')
                return false;

            mystack.pop();
        }
    }

    if(mystack.empty())
        return true;
    else
        return false;
}

int main()
{
    int test;
    char str[150];
    cin>>test;
    getchar();
    for(int kase=1; kase<=test; kase++)
    {
        gets(str);
        if(test_func(str))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
