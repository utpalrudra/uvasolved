#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len;
    char str[10000];
    while(1)
    {
        scanf("%s", str);
        len = strlen(str);
        if(str[0]=='0' && len==1)
            break;
        else
        {
            int carry=0, result=0, ara[10000];
            for(i=0; i<len; i++)
                ara[i]=str[i]-48;
            for(i=0; i<len; i++)
            {
                result=((carry*10)+ara[i])%11;
                carry=result;
            }
            if(result==0)
                printf("%s is a multiple of 11.\n", str);
            else
                printf("%s is not a multiple of 11.\n", str);
        }
    }
    return 0;
}
