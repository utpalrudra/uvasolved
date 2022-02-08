#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, l;
    char str[20];
    while(1)
    {
        scanf("%s", str);
        if(str[0]=='0')
            break;
        else
        {
            int kount=0;
            for(i=0; i<strlen(str); i++)
                kount+=str[i]-48;

            while(kount>9)
            {
                j=kount;
                kount=0;
                while(j!=0)
                {
                    kount=kount+(j%10);
                    j=j/10;
                }
            }
            printf("%d\n", kount);
        }
    }
    return 0;
}
