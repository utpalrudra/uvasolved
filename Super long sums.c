#include <stdio.h>
int ara1[1500000], ara2[1500000], ara3[1500000];
int main()
{
    int test, kase, i, j, k, size;
    scanf("%d", &kase);
    for(test=1; test<=kase; test++)
    {
        scanf("%d", &size);
        for(i=0; i<size; i++)
            scanf("%d %d", &ara1[i], &ara2[i]);

        int carry=0;
        for(i=size-1; i>=0; i--)
        {
            k=carry+ara1[i]+ara2[i];
            ara3[i]=k%10;
            if(k>9)
                carry=1;
            else
                carry=0;

        }
        if(carry==1)
            printf("1");
        for(i=0; i<size; i++)
            printf("%d", ara3[i]);
            printf("\n");

        if(test!=kase)
            printf("\n");
    }
    return 0;
}
