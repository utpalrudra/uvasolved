#include <stdio.h>
int main()
{
    int k, m, n, x, y, i, j;
    while(1)
    {
        scanf("%d", &k);
        if(k==0)
            break;
        else
        {
            scanf("%d %d", &n, &m);
            for(i=1; i<=k; i++)
            {
                scanf("%d %d", &x, &y);

                if(x==n || y==m)
                    printf("divisa\n");
                else if(x<n && y<m)
                    printf("SO\n");
                else if(x>n && y>m)
                    printf("NE\n");
                else if(x<n && y>m)
                    printf("NO\n");
                else if(x>n && y<m)
                    printf("SE\n");
            }
        }
    }
    return 0;
}
