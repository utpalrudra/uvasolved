#include <stdio.h>
int main()
{
    int n, k, i;
    while(scanf("%d %d", &n, &k)==2)
    {
        int kount=0, i=n;

        while(n>=k)
        {
            kount=kount+(n/k);
            if(n%k==0)
                n=n/k;
            else
                n=n/k+(n%k);

        }
        kount=kount+i;
        printf("%d\n", kount);
    }
    printf("'");
    return 0;
}
