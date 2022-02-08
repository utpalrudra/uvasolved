#include <stdio.h>
int main()
{
    int i=1, j=0, t;
    double l, w, d, weight, a, b;
    scanf("%d", &t);
    do
    {
        scanf("%lf %lf %lf %lf", &l, &w, &d, &weight);
        if((l<=56.00 && w<=45.00 && d<=25.00 && weight<=7.00) || ((l+w+d)<=125.00 && weight<=7.00))
           {
               printf("1\n");
               j++;
           }
        else
            printf("0\n");

        i++;
    }
    while(i<=t);

    printf("%d\n", j);
    return 0;
}
