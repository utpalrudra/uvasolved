#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, g , len, l, m;
    char str[110];
    while(scanf("%d", &g))
    {
        if(g==0)
            break;
        else
        {
            scanf("%s", str);
            l=strlen(str);
            len=l/g;
            m=len;
            int k=0, l=len;
            for(i=1; i<=g; i++)
            {
                for(j=len-1; j>=k; j--)
                    printf("%c", str[j]);
                k=k+m;
                len=m+len;
            }
        }
        printf("\n");
    }
    return 0;
}
