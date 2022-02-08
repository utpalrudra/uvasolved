#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, i, j, l, kase=1, m;
    while(scanf("%d %d", &n, &r)==2)
    {
        if(n==0 && r==0)
            break;
        else
        {
            l=r+(r*26);
            if(n>l)
                printf("Case %d: impossible\n", kase);
            else if(r>n)
                printf("Case %d: 0\n", kase);
            else
            {
                j=ceil((n-r)/r);
                if((n-r)%r==0)
                    printf("Case %d: %d\n", kase, j);
                else
                    printf("Case %d: %d\n", kase, j+1);
            }
        }
        kase++;
    }
    return 0;
}
