#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len;
    char str[1500];
    while(gets(str))
    {
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='4')
                str[i]='q';
            else if(str[i]=='5')
                str[i]='j';
            else if(str[i]=='6')
                str[i]='l';
            else if(str[i]=='7')
                str[i]='m';
            else if(str[i]=='8')
                str[i]='f';
            else if(str[i]=='9')
                str[i]='p';
            else if(str[i]=='0')
                str[i]='//';
            else if(str[i]=='-')
                str[i]='[';
            else if(str[i]=='=')
                str[i]=']';
            else if(str[i]=='q')
                str[i]='4';
            else if(str[i]=='w')
                str[i]='5';
            else if(str[i]=='e')
                str[i]='6';
            else if(str[i]=='r')
                str[i]='.';
            else if(str[i]=='t')
                str[i]='o';
            else if(str[i]=='y')
                str[i]='r';
            else if(str[i]=='u')
                str[i]='s';
            else if(str[i]=='i')
                str[i]='u';
            else if(str[i]=='o')
                str[i]='y';
            else if(str[i]=='p')
                str[i]='b';
            else if(str[i]=='[')
                str[i]=';';
            else if(str[i]==']')
                str[i]='=';
            else if(str[i]=='\\')
                str[i]='\\';
            else if(str[i]=='a')
                str[i]='7';
            else if(str[i]=='s')
                str[i]='8';
            else if(str[i]=='d')
                str[i]='9';
            else if(str[i]=='f')
                str[i]='a';
            else if(str[i]=='g')
                str[i]='e';
            else if(str[i]=='h')
                str[i]='h';
            else if(str[i]=='j')
                str[i]='t';
            else if(str[i]=='k')
                str[i]='d';
            else if(str[i]=='l')
                str[i]='c';
            else if(str[i]==';')
                str[i]='k';
            else if(str[i]=='\'')
                str[i]='-';
            else if(str[i]=='z')
                str[i]='0';
            else if(str[i]=='x')
                str[i]='z';
            else if(str[i]=='c')
                str[i]='x';
            else if(str[i]=='v')
                str[i]=',';
            else if(str[i]=='b')
                str[i]='i';
            else if(str[i]=='n')
                str[i]='n';
            else if(str[i]=='m')
                str[i]='w';
            else if(str[i]==',')
                str[i]='v';
            else if(str[i]=='.')
                str[i]='g';
            else if(str[i]=='/')
                str[i]='\'';
            else if(str[i]=='$')
                str[i]='Q';
            else if(str[i]=='%')
                str[i]='J';
            else if(str[i]=='^')
                str[i]='L';
            else if(str[i]=='&')
                str[i]='M';
            else if(str[i]=='*')
                str[i]='F';
            else if(str[i]=='(')
                str[i]='P';
            else if(str[i]==')')
                str[i]='?';
            else if(str[i]=='_')
                str[i]='{';
            else if(str[i]=='+')
                str[i]='}';
            else if(str[i]=='Q')
                str[i]='$';
            else if(str[i]=='W')
                str[i]='%';
            else if(str[i]=='E')
                str[i]='^';
            else if(str[i]=='R')
                str[i]='>';
            else if(str[i]=='T')
                str[i]='O';
            else if(str[i]=='Y')
                str[i]='R';
            else if(str[i]=='U')
                str[i]='S';
            else if(str[i]=='I')
                str[i]='U';
            else if(str[i]=='O')
                str[i]='Y';
            else if(str[i]=='P')
                str[i]='B';
            else if(str[i]=='{')
                str[i]=':';
            else if(str[i]=='}')
                str[i]='+';
            else if(str[i]=='A')
                str[i]='&';
            else if(str[i]=='S')
                str[i]='*';
            else if(str[i]=='D')
                str[i]='(';
            else if(str[i]=='F')
                str[i]='A';
            else if(str[i]=='G')
                str[i]='E';
            else if(str[i]=='H')
                str[i]='H';
            else if(str[i]=='J')
                str[i]='T';
            else if(str[i]=='K')
                str[i]='D';
            else if(str[i]=='L')
                str[i]='C';
            else if(str[i]==':')
                str[i]='K';
            else if(str[i]=='"')
                str[i]='_';
            else if(str[i]=='Z')
                str[i]=')';
            else if(str[i]=='X')
                str[i]='Z';
            else if(str[i]=='C')
                str[i]='X';
            else if(str[i]=='V')
                str[i]='<';
            else if(str[i]=='B')
                str[i]='I';
            else if(str[i]=='N')
                str[i]='N';
            else if(str[i]=='M')
                str[i]='W';
            else if(str[i]=='<')
                str[i]='V';
            else if(str[i]=='>')
                str[i]='G';
            else if(str[i]=='?')
                str[i]='"';
        }
        printf("%s\n", str);
    }
    return 0;
}
