#include <stdio.h>
#include <string.h>
int hulu(char str[10000])
{
    int len, carry, result, i;
    len=strlen(str);
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+(str[i]-48))%15;
        carry=result;
    }
    return carry;
}
int bulu(char str[10000])
{
    int len, carry, result, i;
    len=strlen(str);
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+(str[i]-48))%55;
        carry=result;
    }
    return carry;
}
int leap_1(char str[10000])
{
    int len, carry, result, i;
    len=strlen(str);
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+(str[i]-48))%4;
        carry=result;
    }
    return carry;
}
int leap_2(char str[10000])
{
    int len, carry, result, i;
    len=strlen(str);
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+(str[i]-48))%100;
        carry=result;
    }
    return carry;
}
int leap_3(char str[10000])
{
    int len, carry, result, i;
    len=strlen(str);
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+(str[i]-48))%400;
        carry=result;
    }
    return carry;
}
int main()
{
    int i, j, k, nl=0;
    int leapy_1, leapy_2, leapy_3, b, h;
    char str[100000];
    while(scanf("%s", str)==1)
    {
        b=bulu(str);
        h=hulu(str);
        leapy_1=leap_1(str);
        leapy_2=leap_2(str);
        leapy_3=leap_3(str);
        if(nl!=0)
            printf("\n");
        nl=1;
        if((leapy_1==0 && leapy_2!=0) || leapy_3==0)
        {
            printf("This is leap year.\n");
            if(h==0)
                printf("This is huluculu festival year.\n");
            if(b==0)
                printf("This is bulukulu festival year.\n");
        }
        else if(h==0)
            printf("This is huluculu festival year.\n");

        else
            printf("This is an ordinary year.\n");

    }
    return 0;
}
