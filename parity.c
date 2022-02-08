#include<stdio.h>
int main()
{
    int t, i;
    long long int n, k=0, ara[1000], l=0, m, j=0;
    while(scanf("%lld", &n)==1)
    {
        j=0;
        l=0;
        k=0;
        if(n==0)
            break;
        else
        {
            while(n>0)
            {
                ara[j]=n%2;
                if(ara[j]==1)
                    l++;
                n=n/2;
                j++;
            }
        }
        printf("The parity of ");
        for(i=j-1; i>=0; i--)
            printf("%lld", ara[i]);
        printf(" is %lld (mod 2).\n", l);
    }
    return 0;
}
