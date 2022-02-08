#include <stdio.h>
#include <string.h>
int main()
{
    int test, kase, i, j, k, l, n, len, kount;
    char str[1007][15], show[1007][15], mom[15];

    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            scanf("%s", str[i]);

        scanf("%s", mom);
        len = strlen(mom);
        l = 0;

        for(i=0; i<n; i++)
        {
            for(j = 0, kount = 0; j<len; j++)
            {
                if(str[i][j] != mom[j])
                    kount++;
            }

            if(kount == 1 || kount == 0)
            {
                strcpy(show[l], str[i]);
                l++;
            }

        }

        printf("Case %d:\n", kase);
        for(j=0; j<l; j++)
            printf("%s\n", show[j]);
    }
    return 0;
}
