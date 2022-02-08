#include<stdio.h>
int main()
{
    int i, j, kount=0;
    long long a, b, c, d, l, m;
    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        for(i=0; i<=l; i++)
        {
            if(((a*i*i+b*i+c)%d)==0)
                kount++;
        }
        printf("%d\n",kount);
        kount=0;
    }
    return 0;
}

