#include <stdio.h>
#include <string.h>
int main()
{
    int i, k, len;
    char str[1000000], str1[1000000];
    while(gets(str))
    {
        int flag=1, j=0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]!=' ')
            {
                str1[j] = str[i];
                j++;
            }
            else
            {
                for(k=j-1; k>=0; k--)
                    printf("%c", str1[k]);

                j=0;
                printf(" ");
            }
        }

        if(i==len)
            for(k=j-1; k>=0; k--)
                printf("%c", str1[k]);

        printf("\n");
    }
    return 0;
}
