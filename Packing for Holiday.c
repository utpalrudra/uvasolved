#include<stdio.h>
int main()
{
    int i, j, k, m, l;
    scanf("%d", &l);
    for(m=1; m<=l; m++)
    {
        scanf("%d %d %d", &i, &j, &k);
        if(i<=20 && j<=20 && k<=20)
            printf("Case %d: good\n", m);
        else
            printf("Case %d: bad\n", m);
    }
    return 0;
}

