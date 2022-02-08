#include <stdio.h>
#include <math.h>
int main()
{
    long double x, a=0;
    while(scanf("%Lf", &x)==1)
    {
            a=((x*x*(x+1)*(x+1))/4);
            printf("%.0Lf\n", a);
    }
    return 0;
}
