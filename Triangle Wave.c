#include <stdio.h>
int main()
{
    int t, f, a;
    int i, j, k=0, l, sp;
    scanf("%d", &t);
    for(l=1; l<=t; l++)
    {
        scanf("%d %d", &a, &f);
        for(sp=1; sp<=f; sp++)
        {
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                    printf("%d", i);
                printf("\n");
            }
            for(i=a-1; i>=1; i--)
            {
                for(j=i; j>=1; j--)
                    printf("%d", i);
                printf("\n");
            }
            if(l<t || sp<f)
                printf("\n");
        }
    }
    return 0;
}
