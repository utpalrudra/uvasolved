#include <stdio.h>
#include <string.h>
int  main()
{
    char str1[15], str2[15];
    int i, j, k, l1, l2;
    while(scanf("%s %s", str1, str2)==2)
    {
        if(str1[0]=='0' && str2[0]=='0')
            break;
        else
        {
            int carry=0, kount=0, sum=0, ara1[20], ara2[20];
            l1=strlen(str1);
            l2=strlen(str2);
            for(i=0; i<l1; i++)
                ara1[i] = str1[i] - '0';

            for(i=0; i<l2; i++)
                ara2[i] = str2[i] - '0';

            if(l1>l2)
            {
                for(i=l1-1, j=l2-1; j>=0; i--, j--)
                    ara2[i]=ara2[j];
                for(k=0; k<=i; k++)
                    ara2[k]=0;
                l2=l1;
            }
            else if(l1<l2)
            {
                for(i=l2-1, j=l1-1; j>=0; i--, j--)
                    ara1[i]=ara1[j];
                for(k=0; k<=i; k++)
                    ara1[k]=0;
                l1=l2;
            }
            for(i=l1-1, j=l2-1, carry=0; i>=0, j>=0; i--, j--)
            {
                sum=ara1[i]+ara2[i]+carry;
                if(sum>9)
                {
                    kount++;
                    carry=1;
                }
                else
                    carry=0;
            }
            if(kount==0)
                printf("No carry operation.\n");
            else if(kount==1)
                printf("1 carry operation.\n");
            else
                printf("%d carry operations.\n", kount);
        }
    }
    return 0;
}
