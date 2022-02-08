#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    double n;
    long long m;
    int i, j, k, len;
    char str[10000];
    while(scanf("%s", str))
    {
        if(str[0]=='-')
            break;
        else if(str[0]=='0' && str[1]=='x')
        {
            len=strlen(str);
            for(i=len-1, j=0, n=0; i>1; i--, j++)
            {
                if(str[i]>='A' && str[i]<='F')
                    n=n+((str[i]-55)*pow(16, j));
                else
                    n=n+((str[i]-48)*pow(16, j));
            }

            printf("%.0lf\n", n);
        }
        else
        {
            len=strlen(str);
            for(i=len-1, m=0, j=1; i>=0; i--, j=10*j)
                m=m+(str[i]-48)*j;
            printf("0x");
            int p=0, ara[1000];
            while(m!=0)
            {
                k=m%16;
                ara[p]=k;
                m=m/16;
                p++;
            }
            for(i=p-1; i>=0; i--)
            {

                if(ara[i]==10)
                    printf("A");
                else if(ara[i]==11)
                    printf("B");
                else if(ara[i]==12)
                    printf("C");
                else if(ara[i]==13)
                    printf("D");
                else if(ara[i]==14)
                    printf("E");
                else if(ara[i]==15)
                    printf("F");
                else
                    printf("%d", ara[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
