#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k;
    char str[10000];
    while(gets(str))
    {
        int kount = 0, word_start = 0;
        for(i=0; i<strlen(str); i++)
        {
            if((str[i] >='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z'))
            {
                if(word_start == 0)
                {
                    word_start = 1;
                    kount++;
                }

                else
                    kount = kount;
            }
            else
                word_start = 0;
        }
        printf("%d\n", kount);
    }
    return 0;
}
