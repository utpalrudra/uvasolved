#include<stdio.h>
int main()
{
    int t, i, j, k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &j, &k);
        if(j>k)
            printf(">\n");
        else if(j<k)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
