#include<stdio.h>
#include<string.h>
int main()
{
    int i, kount=0, len;
    char str[100000];
    while(gets(str))
    {
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='"')
            {
                kount++;
                if(kount%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
