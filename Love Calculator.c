#include <stdio.h>
#include <string.h>
int main()
{
    int l1, l2, s1, s2, i, j, k, t1, t2;
    float  l;
    char str1[30], str2[30];
    while(gets(str1))
    {
        gets(str2);
        l1=strlen(str1);
        l2=strlen(str2);
        for(i=0, t1=0; i<l1; i++)
        {
            if(str1[i]>='a' && str1[i]<='z')
                t1=t1+(str1[i]-96);
            if(str1[i]>='A' && str1[i]<='Z')
                t1=t1+(str1[i]-64);
        }
        for(i=0, t2=0; i<l2; i++)
        {
            if(str2[i]>='a' && str2[i]<='z')
                t2=t2+(str2[i]-96);
            if(str2[i]>='A' && str2[i]<='Z')
                t2=t2+(str2[i]-64);
        }
        s1=0, s2=0;
        while(t1!=0)
        {
            s1=s1+(t1%10);
            t1=t1/10;
        }
        while(t2!=0)
        {
            s2=s2+(t2%10);
            t2=t2/10;
        }
        if(s1>9)
        {
            t1=s1;
            s1=0;
            while(t1!=0)
            {
                s1=s1+(t1%10);
                t1=t1/10;
            }
        }
        if(s2>9)
        {
            t2=s2;
            s2=0;
            while(t2!=0)
            {
                s2=s2+(t2%10);
                t2=t2/10;
            }
        }
        if(s1==0 && s2==0)
            printf("0.00 %%\n");
        else
        {
            if(s1>s2)
                l=((float)s2*100)/(float)s1;
            else
                l=((float)s1*100)/(float)s2;
            printf("%.2f %%\n", l);
        }
    }
    return 0;
}
