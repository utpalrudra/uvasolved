#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i, j, k, l, kount;
    while(scanf("%d %d", &i, &j)==2)
    {
        if(i==0 && j==0)
            break;
        else
        {
            kount=0;
            for(k=i; k<=j; k++)
            {
                l=sqrt(k);
                if(sqrt(k)==(int)l)
                    kount++;
            }
            printf("%d\n", kount);
        }

    }
    return 0;
}
