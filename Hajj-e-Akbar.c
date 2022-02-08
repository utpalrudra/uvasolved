#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Hajj", s2[]="Umrah", c[]="*", s3[10];
    int i=1;
    while(i>0)
    {
        gets(s3);
        if(strcmp(s3,c)==0)
             break;
        else if(strcmp(s1,s3)==0)
            printf("Case %d: Hajj-e-Akbar\n", i);
        else if(strcmp(s2,s3)==0)
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }
    return 0;
}
