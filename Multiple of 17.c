#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int ara[10000];
    int i, len;
    while(gets(str))
    {
        if(str[0]=='0')
            break;
        else
        {
            len = strlen(str);
            for(i=0; i<len; i++)
                ara[i]=str[i]-48;

            int mod=0, result;
            for(i=0; i<len; i++)
            {
                result=(ara[i]+mod*10)%17;
                mod=result;
            }
        if(result==0)
            printf("1\n");
        else
            printf("0\n");
        }
    }
    return 0;
}
