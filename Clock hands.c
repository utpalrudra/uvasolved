#include<stdio.h>
int main()
{
    int i, j, l, m;
    double k;
    char ch;
    while(scanf("%d %c %d", &i, &ch, &j)!=EOF)
    {
        if(i==0 && j==0)
            break;
        else
        {
            if(i==12)
                i=0;
            k=(((i*5)+(0.083333333333333*j))-j)*6;
            if(k<0)
            k=(-1)*k;
            if(k>180)
                k=360-k;
            printf("%.3lf\n", k);
        }

    }
    return 0;
}
