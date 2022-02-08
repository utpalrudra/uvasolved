#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, l=1, t, m;
    scanf("%d", &t);
    while(l<=t)
    {
        scanf("%d", &n);
        int n0=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0;
        for(m=1; m<=n; m++)
        {
            i=m;
            while(i>0)
            {
                k=i/10;
                j=abs((k*10)-i);
                if(j==1)
                    n1++;
                else if(j==2)
                    n2++;
                else if(j==3)
                    n3++;
                else if(j==4)
                    n4++;
                else if(j==5)
                    n5++;
                else if(j==6)
                    n6++;
                else if(j==7)
                    n7++;
                else if(j==8)
                    n8++;
                else if(j==9)
                    n9++;
                else
                    n0++;
                i=k;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", n0, n1, n2, n3, n4, n5, n6, n7, n8, n9);
        l++;
    }
    return 0;
}
