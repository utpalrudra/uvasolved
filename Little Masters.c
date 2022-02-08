#include <stdio.h>
#include <math.h>
int main()
{
    int test, kase, x, y, r;
    float a, b, c;
    scanf("%d", &test);
    for(kase =1; kase<=test; kase++)
    {
        scanf("%d %d %d", &x, &y, &r);
        a=r-sqrt(x*x+y*y);
        b=r+sqrt(x*x+y*y);
        printf("%.2f %.2f\n", a, b);
    }
    return 0;
}
