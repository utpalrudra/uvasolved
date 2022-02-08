#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int tan_ahsan(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%2;
        carry=result;
    }
    return carry;
}
int sah_monzoor(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%5;
        carry=result;
    }
    return carry;
}
int adrian_kugel(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%7;
        carry=result;
    }
    return carry;
}
int anton_maydell(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%11;
        carry=result;
    }
    return carry;
}
int derek_kisman(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%15;
        carry=result;
    }
    return carry;
}
int reza_alam(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%20;
        carry=result;
    }
    return carry;
}
int jim_mardell(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%28;
        carry=result;
    }
    return carry;
}
int mon_hasan(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%36;
        carry=result;
    }
    return carry;
}
int leap_1(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%4;
        carry=result;
    }
    return carry;
}
int leap_2(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%100;
        carry=result;
    }
    return carry;
}
int leap_3(int ara[100], int len)
{
    int carry, result, i;
    for(i=0, carry=0; i<len; i++)
    {
        result=(carry*10+ara[i])%400;
        carry=result;
    }
    return carry;
}
int main()
{
    int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    int i, j, k, l, m, nl=0, len;
    char str[100];
    while(gets(str))
    {
        len=strlen(str);
        if(str[0]=='0' && len==1)
            break;
        else
        {
            int zero=0;
            if(nl!=0)
                printf("\n");
            nl=1;
            for(i=0; i<len; i++)
            {
                if(str[i]=='0')
                    if(str[i+1]>= '1' && str[i+1]<='9')
                    {
                        zero++;
                        break;
                    }
                    else
                        zero++;
                else
                    break;
            }

            for(i=zero, k=0; i<len; i++, k++)
            {
                printf("%c", str[i]);
                str[k]=str[i];
            }
            printf("\n");

            str[k]='\0';
            len=len-zero;

            if(len==4)
                m=atoi(str);
            if((len<4) || (len==4 && m<2148))
                printf("No ghost will come in this year\n");
            else
            {
                int ara[100];
                int ara1[]= {2, 1, 4, 8};
                for(i=0; i<len; i++)
                    ara[i]=str[i]-48;
                for(k=len-1, j=3; k>=len-4; k--, j--)
                {
                    if(ara1[j]>ara[k])
                    {
                        ara[k]=(ara[k]+10)-ara1[j];
                        ara[k-1]=ara[k-1]-1;
                    }
                    else
                        ara[k]=ara[k]-ara1[j];
                }

                a0=tan_ahsan(ara, len);
                a1=sah_monzoor(ara, len);
                a2=adrian_kugel(ara, len);
                a3=anton_maydell(ara, len);
                a4=derek_kisman(ara, len);
                a5=reza_alam(ara, len);
                a6=jim_mardell(ara, len);
                a7=mon_hasan(ara, len);
                a8=leap_1(ara, len);
                a9=leap_2(ara, len);
                a10=leap_3(ara, len);
                if(a0!=0 && a1!=0 && a2!=0 && a3!=0 && a4!=0 && a5!=0 && a6!=0 && a7!=0 && ((a8!=0 && a9==0) || a10!=0))
                    printf("No ghost will come in this year\n");
                else
                {
                    if(a0==0)
                        printf("Ghost of Tanveer Ahsan!!!\n");
                    if(a1==0)
                        printf("Ghost of Shahriar Manzoor!!!\n");
                    if(a2==0)
                        printf("Ghost of Adrian Kugel!!!\n");
                    if(a3==0)
                        printf("Ghost of Anton Maydell!!!\n");
                    if(a4==0)
                        printf("Ghost of Derek Kisman!!!\n");
                    if(a5==0)
                        printf("Ghost of Rezaul Alam Chowdhury!!!\n");
                    if(a6==0)
                        printf("Ghost of Jimmy Mardell!!!\n");
                    if(a7==0)
                        printf("Ghost of Monirul Hasan!!!\n");
                    if((a8==0 && a9!=0) || a10==0)
                        printf("Ghost of K. M. Iftekhar!!!\n");
                }
            }
        }
    }
    return 0;
}
