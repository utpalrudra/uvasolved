#include <stdio.h>
int main()
{
    int i, j, k;
    long double kount=0, sum, n;
    while(scanf("%Lf", &n)==1)
    {
        for(i=1, kount=0; i<=n+1; i+=2)
            kount=kount+i;
        sum=((kount*kount)-(kount-3)*(kount-3));
        printf("%.0Lf\n", sum);
    printf("%d", 30827%16);
    }
    return 0;
}

