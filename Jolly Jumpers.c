#include <stdio.h>
#include <stdlib.h>
int main()
{
    int element, ara[3010], ara2[3010], i, j, l, temp;
    while(scanf("%d", &element)==1)
    {
        int kount = 0, k=0;
        for(i=0; i<element; i++)
            scanf("%d", &ara[i]);

        if(element==1)
            printf("Jolly\n");
        else
        {
            for(i=0 ; i<element-1; i++)
                ara2[i]=abs(ara[i+1]-ara[i]);

            for(i=0; i<element-2; i++)
            {
                for(j=i+1; j<element-1; j++)
                {
                    if(ara2[i]>ara2[j])
                    {
                        temp = ara2[i];
                        ara2[i]=ara2[j];
                        ara2[j]=temp;
                    }
                }
            }

            for(i=1; i<element; i++)
                ara[i-1]=i;

            for(i=0; i<element-1; i++)
            {
                if(ara[i]==ara2[i])
                    kount++;
                else
                    k++;
            }

            if(kount==(element-1))
                printf("Jolly\n");
            else
                printf("Not jolly\n");
        }
    }
    return 0;
}
