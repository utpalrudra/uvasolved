#include <stdio.h>
int main()
{
    int test, i, j, p, n;
    int ara[110], day[4000];
    scanf("%d", &test);
    while(test!=0)
    {
        scanf("%d", &n);
        scanf("%d", &p);
        for(i=0; i<p; i++)
            scanf("%d", &ara[i]);

        int kount=0;
        for(i=1; i<=n; i++)
            day[i]=0;

        for(i=0; i<p; i++)
            for(j=ara[i]; j<=n; j=j+ara[i])
                day[j]++;

        if(n>=6)
        {
            day[6]=0;
            day[7]=0;
            for(i=13; i<=n; i=i+7)
            {
                day[i]=0;
                day[i+1]=0;
            }
        }

        for(i=1; i<=n; i++)
            if(day[i]!=0)
                kount++;

        printf("%d\n", kount);
        test--;
    }
    return 0;
}
