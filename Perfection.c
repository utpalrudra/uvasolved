#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, kount=0, l, ara[65000];
    for(i=0; i<60000; i++)
    {
        scanf("%d", &ara[i]);
        kount++;
        if(ara[i]==0)
            break;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0; i<kount; i++)
    {
        int k, m, sp;
        if(ara[i]==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            for(j=2, m=0; j<=sqrt(ara[i]); j++)
            {
                if(ara[i]%j==0)
                {
                    k=ara[i]/j;
                    m=m+j+k;
                }
                else
                    m=m;
            }
            m=m+1;

            l=log10(ara[i]);
            for(sp=1; sp<=4-l; sp++)
                printf(" ");

            if(m<ara[i] || ara[i]==1)
                printf("%d  DEFICIENT\n", ara[i]);
            else if(m==ara[i])
                printf("%d  PERFECT\n", ara[i]);
            else
                printf("%d  ABUNDANT\n", ara[i]);
        }
    }
    return 0;
}
