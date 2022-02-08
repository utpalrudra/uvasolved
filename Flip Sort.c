#include <stdio.h>
int main()
{
    int i, j, test, t=1, element, temp, ara[1100];
    while(scanf("%d", &element)==1)
    {
        int kount = 0;
        for(i=0; i<element; i++)
            scanf("%d", &ara[i]);

        for(i=1; i<element; i++)
        {
            for(j=element-1; j>=i; j--)
            {
                if(ara[j-1]>ara[j])
                {
                    temp = ara[j-1];
                    ara[j-1]=ara[j];
                    ara[j]=temp;
                    kount++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", kount);
    }
    return 0;
}
