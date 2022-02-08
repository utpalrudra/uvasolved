#include <stdio.h>
int main()
{
    int i, j, k, l, t, m;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &m);
        int kount=0, kount2=0, hex=m, c;
        while(m!=0)
        {
            j=m%2;
            if(j==1)
                kount++;
            m=m/2;;
        }
        while(hex!=0)
        {
            c=hex%10;
            while(c!=0)
            {
                j=c%2;
                if(j==1)
                    kount2++;
                c=c/2;
            }
            hex=hex/10;
        }
        printf("%d %d\n", kount, kount2);
    }
    return 0;
}
