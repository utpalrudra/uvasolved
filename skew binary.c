#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[100000];
    int i, j, k, l;
    long long skew=0, len, ara[100000];
    while(scanf("%s", &str)==1)
    {
        if(str[0] == '0')
            break;
        else
        {
            skew=0;
            len=strlen(str);
            for(i=0; i<len; i++)
                ara[i] = str[i] - '0';
            for(i=0, j=len; i<len; i++, j--)
                skew = skew + (ara[i]*(pow(2, j)-1));
        }
        printf("%lld\n", skew);
    }
    return 0;
}
