#include<stdio.h>
int main()
{
    int t, i, j=0, l=0, k;
    int ara[20];
    scanf("%d", &t);
    printf("Lumberjacks:\n");
    for(k=1; k<=t; k++)
    {
        for(i=0; i<10; i++)
        {
            scanf("%d", &ara[i]);
        }
        for(i=0; i<9; i++)
        {
            if(ara[i]>ara[i+1])
                j++;
            else if(ara[i]<ara[i+1])
                l++;
        }
        if(j==9 || l==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
        l=0;
        j=0;
    }
    return 0;
}
