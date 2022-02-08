#include <stdio.h>
#include <string.h>
int main()
{
    int test, kase, i, j, k;
    char str[650];
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%s", str);
        int a=0, g=0, i=0, m=0, r=0, t=0, kount=0;
        for(j=0; j<strlen(str); j++)
        {
            if(str[j]=='A')
                a++;
            else if(str[j]=='G')
                g++;
            else if(str[j]=='I')
                i++;
            else if(str[j]=='M')
                m++;
            else if(str[j]=='R')
                r++;
            else if(str[j]=='T')
                t++;
        }
        while(m!=0 && m>=1 && a!=0 && a>=3 && r!=0 && r>=2 && g!=0 && g>=1 && i!=0 && i>=1 && t!=0 && t>=1)
        {
            m=m-1;
            a=a-3;
            r=r-2;
            g=g-1;
            i=i-1;
            t=t-1;
            kount++;
        }
        printf("%d\n", kount);
    }
    return 0;
}
