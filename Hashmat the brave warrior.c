#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long a, b, c, d;
    while(scanf("%lld %lld",&a, &b)!= EOF)
    {
        c=(a-b);
        if(c<0)
            c=(-1)*c;
        printf("%lld\n", c);
    }
    return 0;
}
