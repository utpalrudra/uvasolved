#include <stdio.h>
int main()
{
    int t, i, j;
    int A, B, tk, Aget;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &A, &B, &tk);
        Aget = ((A-((A+B)/3))*tk)/((A+B)/3);
        if(Aget<=0)
            printf("0\n");
        else
            printf("%d\n", Aget);
    }
    return 0;
}
