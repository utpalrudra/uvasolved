#include <stdio.h>
int main()
{
    int t, i=1, j;
    long long d1, m1, y1, d2, m2, y2, y;
    char ch;
    scanf("%d", &t);
    getchar();
    while(i<=t)
    {
        scanf("%lld %c %lld %c %lld", &d1, &ch, &m1, &ch, &y1);
        scanf("%lld %c %lld %c %lld", &d2, &ch, &m2, &ch, &y2);
        getchar();
        if((y1<y2) || ((y1==y2) && (m1<m2)) || ((y1==y2) && (m1==m2) && (d1<d2)))
            printf("Case #%d: Invalid birth date\n", i);
        else
        {
            y=y1-y2;
            if((m1<m2) || ((m1==m2) && (d1<d2)))
                y=y-1;
            if(y>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %lld\n", i, y);
        }
        i++;
    }
    return 0;
}
