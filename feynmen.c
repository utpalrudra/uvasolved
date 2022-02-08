#include<stdio.h>
int main()
{
    int n, t, i, j;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        else
        {
            j=(n*(n+1)*(2*n+1))/6;
            printf("%d\n", j);
        }
    }
    return 0;

}
