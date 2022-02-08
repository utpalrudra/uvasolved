#include <stdio.h>
int main()
{
    int i=1, n, j, k;
    double max_product=1;
    int ara[1000];
    while(scanf("%d", &n)==1)
    {
        max_product=1;
        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[j]);
            if(ara[j]>0)
            {
                max_product=max_product*ara[j];
            }
        }
        printf("Case #%d: %.0lf\n", i, max_product);
        i++;
    }
    return 0;
}
