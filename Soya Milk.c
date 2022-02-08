#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double length, width, height, deg;
    double total_area, triangle_area, remain_area;
    while(scanf("%lf %lf %lf %lf", &length, &width, &height, &deg)==4)
    {
        double a, l, v;
        v=length*tan(pi*deg/180);
        printf("%.3lf mL\n", (length*width*height)-(.5*length*v*width));


    }
    return 0;
}






