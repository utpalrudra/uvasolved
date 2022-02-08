#include <stdio.h>
#include <string.h>
int main()
{
    int test, kase, i, k;
    char str[100];
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%s", str);
        int kount=0, j=1;
        for(i=0; i<=strlen(str); i++)
        {
            if(str[i]=='O')
            {
                kount=kount+j;
                j++;
            }
            else
                j=1;
        }
        printf("%d\n", kount);
    }
    return 0;
}
