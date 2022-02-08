#include <stdio.h>
int main()
{
    int test, kase, n, i=0;
    long long n1=0, n2=1;
    long long ara[100];
    while(i<55)
    {
        ara[i]=n1+n2;
        n1=n2;
        n2=ara[i];
        i++;
    }
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%d", &n);
        printf("Scenario #%d:\n", kase);
        printf("%lld\n\n", ara[n]);
    }
    return 0;
}
