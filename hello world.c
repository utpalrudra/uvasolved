#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i=1, j, k, l, kount=0;
    double a, b;
    while(i>0)
    {
        scanf("%lf", &a);
        if(a<0)
            break;
        else
        {
            while(a!=1)
            {
                a=ceil(a/2);
                kount++;
            }
        }
        printf("Case %d: %d\n", i, kount);
        kount=0;
        i++;
    }
    return 0;
}

