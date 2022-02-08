#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k;
    char str[1000];
    while(gets(str))
    {k=strlen(str);
        for(i=0; i<k; i++)
            printf("%c", str[i]-7);
        printf("\n");
    }
    return 0;
}

