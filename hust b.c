#include <stdio.h>
int main()
{
    int a, b, c, x, y, z;
    int i, j, k, l;
    while(scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z)==6)
    {
        if(a>=x && b>=y && c>=z)
            printf("Yes\n");
        else if(a<x && b<y && c<z)
            printf("No\n");
        else if(a>=x && b>=y && c<z)
        {
            i = (a-x)/2;
            j = (b-y)/2;
            if((i+j)>=(z-c))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(a>=x && b<y && c>=z)
        {
            i = (a-x)/2;
            j = (c-z)/2;
            if((i+j)>=(y-b))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(a>=x && b<y && c<z)
        {
            i = (a-x)/2;
            if(i>=(y+z-b-c))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(a<x && b>=y && c>=z)
        {
            i = (c-z)/2;
            j = (b-y)/2;
            if((i+j)>=(x-a))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(a<x && b>=y && c<z)
        {
            i = (b-y)/2;
            if(i>=(x+z-a-c))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(a<x && b<y && c>=z)
        {
            i = (c-z)/2;
            if(i>=(x+y-a-b))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
