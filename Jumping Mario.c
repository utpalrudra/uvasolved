#include<stdio.h>
int main()
{
    int kas, i=1, j, t, ara[100], h_j, l_j;
    scanf("%d", &kas);
    do
    {
        h_j=0, l_j=0;
        scanf("%d", &t);
        for(j=0; j<t; j++)
            scanf("%d", &ara[j]);
        for(j=0; j<t-1; j++)
        {
            if(ara[j]>ara[j+1])
                l_j++;
            else if(ara[j]<ara[j+1])
                h_j++;
        }

        printf("Case %d: %d %d\n", i, h_j, l_j);
        i++;
    }
    while(i<=kas);
    return 0;
}
