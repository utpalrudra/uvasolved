#include <bits/stdc++.h>
using namespace std;

struct node
{
    bool endmark;
    node *next[27];

    node()
    {
        endmark = 0;
        for(int i=0; i<27; i++)
            next[i] = NULL;
    }
} *root;

void insert_trie(char *str, int len)
{
    node *current = root;
    for(int i=0; i<len; i++)
    {
        int id = str[i] - '0';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
    }
    current->endmark = 1;
}

bool search_trie(char *str)
{
    node *current = root;
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        int id = str[i] - '0';
        if(current->next[id]!=NULL && current->endmark==1)
            return true;
        current = current->next[id];
    }
    return false;
}

void del( node *current)
{
    for(int i=0; i<10; i++)
        if(current->next[i])
            del(current->next[i]);

    delete (current);
}

int main()
{
    char str[10000][15];
    int s, test, len, ara[1000];
    cin>>test;
    for(int kase=1; kase<=test; kase++)
    {

        root = new node();
        int flag = 0;
        cin>>s;

        for(int i=0; i<s; i++)
        {
            cin >> str[i] ;
            len = strlen(str[i]);
            insert_trie(str[i], len);
        }

        for(int i=0; i<s; i++)
            if(search_trie(str[i]))
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }

        if(flag!=1)
            cout << "YES" << endl;


        del(root);
    }
    return 0;
}
