#include<stdio.h>
int main()
{
    long long j, k, l, m;
    int t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld", &j, &k, &l);
        if((j>=k && j<=l) || (j<=k && j>=l))
            printf("Case %d: %lld\n", i, j);
        else if((k>=l && k<=j) || (k<=l && k>=j))
            printf("Case %d: %lld\n", i, k);
        else if((l>=k && l<=j) || (l<=k && l>=j))
            printf("Case %d: %lld\n", i, l);
    }
    return 0;
}
