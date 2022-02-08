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
    while(scanf("%d", &test)==1)
    {
        if(test==0)
            break;
        else
            printf("%lld\n", ara[test-1]);
    }
    return 0;
}

