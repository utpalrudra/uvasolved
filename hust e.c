#include <stdio.h>
int main()
{
    long long int d1, d2, d3, s1, s2, s3, s4, temp, min;
    while(scanf("%lld %lld %lld", &d1, &d2, &d3)==3)
    {
        s1 = 2*(d1+d2);
            min = s1;

        s2 = (d1+d2+d3);
        if(min>s2)
            min = s2;

        s3 = 2*(d1+d3);
        if(min > s3)
            min = s3;

        s4 = 2*(d2+d3);
        if(min > s4)
            min = s4;

        printf("%lld\n", min);
    }

    return 0;
}
