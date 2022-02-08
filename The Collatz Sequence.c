#include<stdio.h>
int main()
{
    long long n1, n2, i, j, kount, cas = 1;
    while(scanf("%lld %lld", &n1, &n2)!=EOF)
    {
        if(n1<0 && n2<0)
            break;
        else
        {
            for(i=n1; i<=n2; i++)
            {
                j=i;
                kount=0;
                while(j!=1)
                {
                    if(j%2==0)
                        j=j/2;
                    else
                        j=3*j+1;
                    kount++;
                    if(j>n2)
                        break;
                }
                if(j==1)
                {
                    kount++;
                    break;
                }
                else if(j>n2)
                    break;
            }
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", cas, n1, n2, kount);
        }
        cas++;
    }
    return 0;
}
