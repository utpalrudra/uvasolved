#include <stdio.h>
int main()
{
    int test, kase, k, i, j, h, m, max, time;
    int hour[107], min[107], q[107];
    char ch;
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%d %d %c %d", &k, &h, &ch, &m);

        for(i=0; i<k; i++)
        {
            scanf("%d %c %d %d", &hour[i], &ch, &min[i], &q[i]);

            if(min[i]>=m)
            {
                if(hour[i]<h)
                    hour[i] = hour[i]+24;
            }

            else if(min[i]<m)
            {
                if(hour[i]>h)
                {
                    hour[i] = hour[i]-1;
                    min[i] = min[i]+60;
                }

                else
                {
                    min[i] = min[i]+60;
                    hour[i] = hour[i]+23;
                }
            }

            time = (hour[i] - h)*60 + min[i]-m + q[i];

            if(i==0) max = time;
            if(max>time)
                max = time;
        }

        printf("Case %d: %d\n", kase, max);
    }

    return 0;
}

