#include <stdio.h>
int main()

{
    int i, j, kount=0, kount2=0, k=1;
    int ara[1009];
    while(scanf("%d", &i)==1)
    {
        if(i==0)
            break;
        else
        {
            for(j=0, kount=0, kount2=0; j<i; j++)
            {
                scanf("%d", &ara[j]);
                if(ara[j]==0)
                    kount++;
                else
                    kount2++;

            }
        }
        printf("Case %d: %d\n", k, kount2-kount);
        k++;
    }
    return 0;
}
