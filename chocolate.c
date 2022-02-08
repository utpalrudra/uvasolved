#include <stdio.h>
int main()
{
    int test, kase,i, j, k, max,a;
    int l, r, s;
    int kount1, kount2;
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        max=0;
        int leju[100007]= {}, rony[100007]= {}, sujon[100007]= {};
        scanf("%d %d %d", &l, &r, &s);

        for(i=0; i<l; i++)
        {
            scanf("%d", &a);
            if(a>max)
                max=a;
            leju[a]=1;
        }
        for(i=0; i<r; i++)
        {
            scanf("%d", &a);
            if(a>max)
                max=a;
            rony[a]=1;
        }
        for(i=0; i<s; i++)
        {
            scanf("%d", &a);
            if(a>max)
                max=a;
            sujon[a]=1;
        }


        for(i=0, kount1 = 0, kount2=0; i<=max; i++)
        {
            if(leju[i]==1)
            {
                if(rony[i]==1 || sujon[i]==1)
                    continue;
                else
                    kount1++;

            }
            else
            {
                if(rony[i]==1 && sujon[i]==1)
                    kount2++;
            }
        }
        printf("Case #%d:\n", kase);
        printf("%d %d\n", kount1, kount2);

        for(i=0, kount1 = 0, kount2=0; i<=max; i++)
        {
            if(rony[i]==1)
            {
                if(leju[i]==1 || sujon[i]==1)
                    continue;
                else
                    kount1++;

            }
            else
            {
                if(leju[i]==1 && sujon[i]==1)
                    kount2++;
            }
        }
        printf("%d %d\n", kount1, kount2);

        for(i=0, kount1 = 0, kount2=0; i<=max; i++)
        {
            if(sujon[i]==1)
            {
                if(rony[i]==1 || leju[i]==1)
                    continue;
                else
                    kount1++;

            }
            else
            {
                if(rony[i]==1 && leju[i]==1)
                    kount2++;
            }
        }
        printf("%d %d\n", kount1, kount2);


    }
    return 0;
}
