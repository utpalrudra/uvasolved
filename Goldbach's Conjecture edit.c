#include <stdio.h>
#include <math.h>
#define max 1000000
int ara[max+7];
int A[max+7];
int prime(int x);
int main()
{
    int i, j, b, flag=0, k, p;
    int num;
    long long int n;
    while(scanf("%lld", &n)==1)
    {
        if(n==0) break;
        num = sqrt(n)+1;

        for(i=1; i<=(num+7); i++)
            ara[i] = 1;

        for(i=4; i<=(num+7); i+=2)
            ara[i] = 0;

        for(i=3; i<=sqrt(num); i+=2)
            for(j = i+i; j<=n; j+=i)
                if(ara[j]!=0)
                    ara[j] = 0;

        for(i=2, k=0; i<=num; i++)
            if(ara[i]!=0)
                A[k++]=i;

        for(i=0; i<k; i++)
        {
            b = n - A[i];
            p = prime(b);
            if(p==1)
            {
                printf("%lld = %d + %d\n", n, A[i], b);
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

int prime(int x)
{
    if(x%2==0) return 0;
    int i, j;
    for(i=3; i<=sqrt(x); i++)
        if(x%i == 0) return 0;

    return 1;
}


/// link https://ideone.com/Rm5cAU
