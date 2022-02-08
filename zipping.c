#include <stdio.h>
int main ()
{
    int a, b, i, j, k, temp;
    while(scanf("%d %d", &a, &b)==2)
    {
        int k1=0, k2=0, k3=0, k4=0;
        if(a==-1 && b==-1)
            break;
        else
        {
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            for(i=a+1; i<=b; i++)
                k1++;
            for(i=a; i>=0; i--)
                k2++;
            for(i=b+1; i<=99; i++)
                k3++;
            k4=k2+k3;
            if(k4<k1)
                k1=k4;
            else
                k1=k1;
            printf("%d\n", k1);
        }
    }
    return 0;
}
