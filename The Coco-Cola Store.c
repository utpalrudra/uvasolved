#include<stdio.h>
int main()
{
    int i, j=0, k, l, m;
    while(scanf("%d", &i)==1)
    {
        if(i==0)
            break;
        else
        {
            j=i/2;
            printf("%d\n", j);
        }
    }
    return 0;
}
