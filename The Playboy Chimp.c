#include <stdio.h>
int main()
{
    int bunty, luchu, i, j, k;
    int ara1[50007], ara2[50007];
    while(scanf("%d", &bunty)==1)
    {
        for(i=0; i<bunty; i++)
            scanf("%d", &ara1[i]);

        scanf("%d", &luchu);
        for(i=0; i<luchu; i++)
            scanf("%d", &ara2[i]);

        int lowest=0, highest=0, l, h;

        for(j=0; j<luchu; j++)
        {
            for(i=0; i<bunty; i++)
            {
                if(ara2[j] == ara1[i])
                {
                    if(i == 0)
                    {
                        //printf("X %d\n", ara1[i+1]);
                    }
                    else if(i == bunty)
                    {
                        printf("%d X\n", ara1[i-1]);
                    }
                    else
                    {
                        printf("%d %d\n", ara1[i-1], ara1[i+1]);
                    }
                }

                else if(ara2[j] > ara1[i] && ara2[j] < ara1[i+1])
                {
                    printf("%d %d\n", ara1[i], ara1[i+1]);
                }

                else if(ara2[j] > ara1[bunty-1])
                {
                    printf("%d X\n", ara1[bunty-1]);
                }

            }

        }
    }
    return 0;
}

//
//            if(lowest==0 && highest==0)
//                printf("X X\n");
//            else if(lowest==0)
//                printf("X %d\n", highest);
//            else if(highest==0)
//                printf("%d X\n", lowest);
//            else
//                printf("%d %d\n", lowest, highest);



//
//            for(i=bunty-1; i>=0; i--)
//            {
//                if(ara1[k]<=ara2[i])
//                {
//                    if(i==bunty-1)
//                        highest=ara1[bunty-1];
//                    else
//                        highest=ara1[i+1];
//                        break;
//                }
//            }
