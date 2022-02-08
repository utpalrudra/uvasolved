#include <stdio.h>
#include <string.h>
int main()

{
    int t, i;
    char str[10];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s", str);
        if(strlen(str)==3)
            {
                if((str[0]=='o' && str[1]=='n') || (str[0]=='o' && str[2]=='e') ||(str[1]=='n' && str[2]=='e'))
                    printf("1\n");
                else
                    printf("2\n");
            }
        else
            printf("3\n");
    }
    return 0;
}
