#include <stdio.h>
int main()
{
    int i, j, k, l, test, t=1, element, temp, ara[1100];
    scanf("%d", &test);
    do
    {
        scanf("%d", &element);
        int kount = 0;
        for(i=0; i<element; i++)
            scanf("%d", &ara[i]);

        for(i=0; i<element-1; i++)
        {
            for(j=i+1; j<element; j++)
            {
                if(ara[i]>ara[j])
                {
                    temp = ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                    kount++;
                }
                else
                    kount=kount;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", kount);
        t++;
    }
    while(t<=test);
    return 0;
}
