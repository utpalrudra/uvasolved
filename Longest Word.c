#include <stdio.h>
#include <string.h>
int main()
{
    char str[10500], word[110], a[10];
    int i, j, k, max_len, len;
    while(gets(str))
    {
        int kount = 0, word_start = 0;               /// just is a student of computer science and engineering
        for(i=0, j=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                while(str[i]!=' ')
                {
                    a[j]=str[i];
                    i++;
                    j++;
                }
                if(strcmp("E-N-D", a)==0)
                    break;
            }

            printf("%s", a);

        }


    }
    return 0;
}
