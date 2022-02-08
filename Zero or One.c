#include<stdio.h>
int main()
{
    int a, b, c, i, j;
    while(scanf("%d %d %d", &a, &b, &c)==3)
    {
        if(a==b && b==c)
            printf("*\n");
        else if(a==b && a!=c)
            printf("C\n");
        else if(a==c && a!=b)
            printf("B\n");
        else if(b==c && b!=a)
            printf("A\n");
    }
    return 0;
}
