#include<stdio.h>
int main()
{
    long int i, j=0, k, l, m;
    while(scanf("%ld", &i)==1)
    {
        if(i==0)
            break;
        else
        {
            j=i+i/2;
            printf("%ld\n", j);
        }
    }
    return 0;
}
