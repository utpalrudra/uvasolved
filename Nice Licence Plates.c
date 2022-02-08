#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int test, kase, i, j, num, p;
    char ch, str[10];
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%s", str);
        int len, a, b;
        double k;
        len=strlen(str);
        for(i=0, k=0, p=2; i<3; i++, p--)
            k=k+(pow(26, p)*(str[i]-65));

        for(i=7, a=1, num=0; i>=4; i--, a=a*10)
            num=num+((str[i]-48)*a);

        j=abs(num-k);
        if(j<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
