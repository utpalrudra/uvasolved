#include <stdio.h>
int main()
{
    int n, test, kase, ara[11000], i, j, max;
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%d", &n);
        for(i=0, max=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
            if(max<ara[i])
                max=ara[i];
        }
        printf("Case %d: %d\n", kase, max);
    }
    return 0;
}
