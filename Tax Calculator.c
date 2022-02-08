#include <stdio.h>
int main()
{
    int t, kase, i, j, k;
    double income, tax_1, tax_2, tax_3;
    scanf("%d", &t);
    for(kase=1; kase<=t; kase++)
    {
        scanf("%lf", &income);
        if(income<=180000)
            printf("Case %d: 0\n", kase);
        else
        {
            income=income-180000;
            if(income<=300000)
            {
                tax_1=(income*10)/100;
            }


        }
    }
}
