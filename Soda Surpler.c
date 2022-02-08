#include <stdio.h>
int main()
{
    int e, f, c, i, t, cas;
    scanf("%d", &t);
    for(cas=1; cas<=t; cas++)
    {
        scanf("%d %d %d", &e, &f, &c);
        i=e+f;
        int kount=0;
        while(i>=c)
        {
            kount=kount+(i/c);
            i=i/c+(i%c);
        }
        printf("%d\n", kount);
    }
    return 0;
}
