#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10000], str2[10000];
    int len, i, j, k, l, flag=1, len1, len2, carry, d, sum;
    int ara1[10000], ara2[10000];
    while(gets(str1))
    {
        if(flag==1)
        {
            len1 = strlen(str1);
            for(i=0; i<len1; i++)
                ara1[i]=str1[i]-48;
            flag=0;
            continue;
        }

        if(str1[0]=='0')
            break;
        else
        {
            len2 = strlen(str1);
            for(i=0; i<len2; i++)
                ara2[i]=str1[i]-48;
            if(len1>len2)
            {
                for(i=len1-1, j=len2-1; j>=0; i--, j--)
                    ara2[i]=ara2[j];
                for(k=0; k<=i; k++)
                    ara2[k]=0;
                len2=len1;
            }
            else if(len1<len2)
            {
                for(i=len2-1, j=len1-1; j>=0; i--, j--)
                    ara1[i]=ara1[j];
                for(k=0; k<=i; k++)
                    ara1[k]=0;
                len1=len2;
            }
            for(i=len1-1, j=len2-1, carry=0, l=len1-1; i>=0, j>=0; i--, j--, l--)
            {
                sum=ara1[i]+ara2[i]+carry;
                d=sum%10;
                if(i==0)
                    ara1[l]=sum;
                else
                    ara1[l]=d;
                carry=sum/10;
            }
        }
    }
    for(i=0; i<len1; i++)
        printf("%d", ara1[i]);
    printf("\n");
    return 0;
}
