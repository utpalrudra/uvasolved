#include <stdio.h>
#include <math.h>
#define max 1000000
int ara[max+7];
int A[max+7];
int main()
{
    int n, i, j, b, flag=0, k, l;

    for(i=2; i<=max; i++)
        ara[i] = 1;

    for(i=4; i<=max; i+=2)
        ara[i] = 0;

    int root = sqrt(max);
    for(i=3; i<=root; i+=2)
        for(j = i*i, l=i+i ; j<=root; j+=l)
            if(ara[j]!=0)
                ara[j] = 0;

    A[0] = 2;
    for(i=3, k=1; i<=max; i+=2)
        if(ara[i]== 1)
        {
            A[k]=i;
            k++;
        }

    while(scanf("%d", &n)==1)
    {
        if(n==0) break;

        for(i=0; i<k; i++)
        {
            b = n - A[i];
            if(ara[b]==1)
            {
                printf("%d = %d + %d\n", n, A[i], b);
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
