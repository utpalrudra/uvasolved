#include<stdio.h>
#include<math.h>
int main()
{
    long long dec, ter, i=0, j, ara[50];
    while(scanf("%lld", &dec)==1)
    {
        i=0;
        if(dec<0)
            break;
        else if(dec==0)
            printf("0");
        else
        {
            while(dec>0)
            {
                ara[i]=dec%3;
                dec=dec/3;
                i++;
            }
            i=i-1;
            while(i>=0)
            {
                printf("%lld", ara[i]);
                i--;
            }
        }
        printf("\n");
    }
    return 0;
}
