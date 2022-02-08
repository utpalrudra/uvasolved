#include <stdio.h>
#include <string.h>
int main()
{
    int test, kase;
    char str[110];

    scanf("%d", &test);
    getchar();
    for(kase=1; kase<=test; kase++)
    {
        int kount=0, i;
        gets(str);

        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='s' || str[i]=='z')
                kount = kount+4;
            else if(str[i]=='c' || str[i]=='i' || str[i]=='l' || str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='f' || str[i]=='y')
                kount = kount+3;
            else if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k' || str[i]=='n' || str[i]=='q' || str[i]=='u' || str[i]=='x')
                kount = kount+2;
            else if(str[i]=='a' || str[i]=='d' || str[i]=='g' || str[i]=='j' || str[i]=='m' || str[i]=='p' || str[i]=='t' || str[i]=='w' || str[i]==' ')
                kount++;
        }

        printf("Case #%d: %d\n", kase, kount);
    }
    return 0;
}


