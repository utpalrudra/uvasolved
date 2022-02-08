#include <stdio.h>
#include <string.h>
char fibo(char str1[10000000], char str2[10000000])
{
    char str[1000000000];
    int l1, l2, i, j, k, carry=0;            ///9898989898
    l1=strlen(str1);                         ///    678887
    l2=strlen(str2);
    if(l1>l2)
    {
        for(i=l1-1, j=l2-1; j>=0; i--, j--)
            str2[i]=str2[j];
        for(k=0; k<=i; k++)
            str2[k]=0;
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
    for(i=l1-1, carry=0; i>=0; i++)
    {
        str[i]=(str1[i]-48)+(str2[i]-48)+carry;
        if(str[i]>9)
            carry=1;
        else
            carry=0;
    }
    return str;
}
int main()
{
    char str1[10000000]="0", str2[10000000]="1", str[10000000];
    int n;
    while(scanf("%d", &n)==1)
    {
        str=fibo(str1, str2);
        printf("%s\n", str);
        str1=str;
        str2=str1;
    }
    return 0;
}

