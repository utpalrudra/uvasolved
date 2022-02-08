#include <stdio.h>
int main()
{
    int n, i, j, k, temp;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        else
        {
            int kount=0, a, b;
            for(i=1; i<n; i++)
            {
                for(j=i+1; j<=n; j++)
                {
                    a=i, b=j;
                    while(a!=0)
                    {
                        temp=a;
                        a=b%a;
                        b=temp;
                    }
                    kount=kount+b;
                }
            }
            printf("%d\n", kount);
        }
    }
    return 0;
}
