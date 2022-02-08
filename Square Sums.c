#include <stdio.h>
int main()
{
    int ara[15][15];
    long long  ara1[100];
    int i, j, k, l, m, n, dim, sum=0, sum1=0, kase=1;
    while(scanf("%d", &dim)==1)
    {
        if(dim==0)
            break;
        else
        {
            for(i=0; i<dim; i++)
                for(j=0; j<dim; j++)
                {
                    scanf("%d", &ara[i][j]);
                    sum=sum+ara[i][j];
                }
            int a, b, sum2=0;
            if(dim%2!=0)
            {
                m=dim/2;
                for(a=1; a<=m; a++)
                {
                    for(i=m-a; i<=m+a; i++)
                        for(j=m-a; j<=m+a; j++)
                            sum1=sum1+ara[i][j];

                    ara1[a-1]=sum1-sum2-ara[m][m];
                    sum2=ara1[a-1];
                    sum1=0;
                }
                printf("Case %d:", kase);
                for(i=m-1; i>=0; i--)
                    printf(" %lld", ara1[i]);
                printf(" %d\n", ara[m][m]);
            }
            else
            {
                m=dim/2;
                int a, b, sum2=0;
                for(a=1, b=0; a<=m; a++, b++)
                {
                    for(i=m-a; i<=m+b; i++)
                        for(j=m-a; j<=m+b; j++)
                            sum1=sum1+ara[i][j];

                    ara1[a-1]=sum1-sum2;
                    sum2=sum1;
                    sum1=0;
                }
                printf("Case %d:", kase);
                for(i=m-1; i>=0; i--)
                    printf(" %lld", ara1[i]);
                printf("\n");
            }
        }
        kase++;
    }
    return 0;
}
