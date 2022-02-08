#include <stdio.h>
int main()
{
    int test, kase, i, j, k;
    char str[10000], str1[10000];
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%s", str);
        int len, kount=0, num, temp;
        len=strlen(str);
        if(len==1)
            printf("1 %s\n", str);
        else if(len==2 && str[0]==str[1])
            printf("1 %s\n", str);
        else
        {
            int ara1[10000], ara2[10000], carry;
            for(i=0, j=len-1, carry=0; i<len; i++, j--)
            {
                k=(str[i]-48)+(str[j]-48)+carry;
                str[j]=k%10;
                if(k>9)
                    carry=1;
                else
                    carry=0;
            }
            kount++;
            for(i=0, j=len-1; i<len/2; i++, j--)
            {
                if(str[i]==str[j])
                {
                    printf("%d %s\n", kount, str);
                    break;
                }
                else
                    continue;
            }
        }
    }
    return 0;
}

