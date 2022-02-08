#include<stdio.h>
int main()
{
    int t, i, j, k, l, sum;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &j, &k);
        sum=0;
        for(l=j; l<=k; l++)
        {
            if(l%2!=0)
                sum=sum+l;
        }
            printf("Case %d: %d\n", i, sum);
    }
    return 0;

}
