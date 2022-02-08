#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len;
    char str[1000];
    while(gets(str))
    {
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='2')
                str[i]='`';
            else if(str[i]=='3')
                str[i]='1';
            else if(str[i]=='4')
                str[i]='2';
            else if(str[i]=='5')
                str[i]='3';
            else if(str[i]=='6')
                str[i]='4';
            else if(str[i]=='7')
                str[i]='5';
            else if(str[i]=='8')
                str[i]='6';
            else if(str[i]=='9')
                str[i]='7';
            else if(str[i]=='0')
                str[i]='8';
            else if(str[i]=='-')
                str[i]='9';
            else if(str[i]=='=')
                str[i]='0';
            else if(str[i]=='E' || str[i]=='e')
                str[i]='q';
            else if(str[i]=='R' || str[i]=='r')
                str[i]='w';
            else if(str[i]=='T' || str[i]=='t')
                str[i]='e';
            else if(str[i]=='Y' || str[i]=='y')
                str[i]='r';
            else if(str[i]=='U' || str[i]=='u')
                str[i]='t';
            else if(str[i]=='I' || str[i]=='i')
                str[i]='y';
            else if(str[i]=='O' || str[i]=='o')
                str[i]='u';
            else if(str[i]=='P' || str[i]=='p')
                str[i]='i';
            else if(str[i]=='[')
                str[i]='o';
            else if(str[i]==']')
                str[i]='p';
            else if(str[i]=='\\')
                str[i]='[';
            else if(str[i]=='D' || str[i]=='d')
                str[i]='a';
            else if(str[i]=='F' || str[i]=='f')
                str[i]='s';
            else if(str[i]=='G' || str[i]=='g')
                str[i]='d';
            else if(str[i]=='H' || str[i]=='h')
                str[i]='f';
            else if(str[i]=='J' || str[i]=='j')
                str[i]='g';
            else if(str[i]=='K' || str[i]=='k')
                str[i]='h';
            else if(str[i]=='L' || str[i]=='l')
                str[i]='j';
            else if(str[i]==';')
                str[i]='k';
            else if(str[i]=='\'')
                str[i]='l';
            else if(str[i]=='C' || str[i]=='c')
                str[i]='z';
            else if(str[i]=='V' || str[i]=='v')
                str[i]='x';
            else if(str[i]=='B' || str[i]=='b')
                str[i]='c';
            else if(str[i]=='N' || str[i]=='n')
                str[i]='v';
            else if(str[i]=='M' || str[i]=='m')
                str[i]='b';
            else if(str[i]==',')
                str[i]='n';
            else if(str[i]=='.')
                str[i]='m';
            else if(str[i]=='/')
                str[i]=',';
        }
        printf("%s\n", str);
    }
    return 0;
}
