#include <stdio.h>
#include <string.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double s, deg, i, j, k, arc, chord;
    char str[10];
    while(scanf("%lf %lf %s", &s, &deg, str)==3)
    {
        if(strcmp("min", str)==0)
            deg=(deg/60.0);
        else
            deg=deg;
        if(deg>180)
            deg=360-deg;
        else
            deg=deg;
        deg=(deg*pi)/180;
        arc=((6440+s)*deg);
        if(arc<0)
            arc=(-1)*arc;
        chord=(sqrt(((6440+s)*(6440+s)*2)-(2*(6440+s)*(6440+s)*cos(deg))));
        if(chord<0)
            chord=(-1)*chord;
        printf("%.6lf %.6lf\n", arc, chord);
    }
    return 0;
}

