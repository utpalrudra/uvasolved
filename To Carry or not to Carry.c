#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    int s1[50], s2[50], s3[50];
    int a1[50], a2[50], a3[50];
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        int i=0, j=0, k, l, sum=0, x, m, y, max;
        while(a!=0)
        {
            s1[i] = a%2;
            a = a/2;
            i++;
        }

        while(b!=0)
        {
            s2[j] = b%2;
            b = b/2;
            j++;
        }

        if(i>j) max=j;
        else if(j>i) max=i;
        else max = i;

        for(x=0; x<max ; x++)
        {
            s3[x] = s1[x] + s2[x];
            if(s3[x]==2)
                s3[x] = 0;
        }

        if(i>j)
        {
            while(x<i)
            {
                s3[x] = s1[x];
                x++;
            }
            j=i;
        }

        else if(j>i)
        {
            while(x<j)
            {
                s3[x] = s2[x];
                x++;
            }
            i=j;
        }

        for(m=0, sum=0; m<i; m++)
            sum = sum+(s3[m]*pow(2, m));

        printf("%d\n", sum);
    }
    return 0;
}
