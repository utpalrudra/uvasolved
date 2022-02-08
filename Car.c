#include <stdio.h>
#include <math.h>
int main()
{
    double kase, a, b, c, e, f;
    int i=1, test;
    while(scanf("%d", &test)==1)
    {
        if(test==0)
            break;
        else
        {
            scanf("%lf %lf %lf", &a, &b, &c);
            if(test==1)
            {
                e = ((a+b)*c)/2;
                f = (b-a)/c;
            }
            else if(test==2)
            {
                f = (b-a)/c;
                e = ((a+b)*f)/2;
            }
            else if(test==3)
            {
                e = sqrt((a*a)+2*b*c);
                f = (e-a)/b;
            }
            else if(test==4)
            {
                e = sqrt((a*a)-2*b*c);
                f = (a-e)/b;
            }
            printf("Case %d: %.3lf %.3lf\n", i, e, f);
        }
        i++;
    }
    return 0;
}
