#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, kount = 0, l1, l2;
    char str[105][105];
    int ara[105][105];
    while(scanf("%d %d", &l1, &l2)==2)
    {
        if(l1 == 0 && l2 == 0) break;
        else
        {
            for(i=0; i<l1; i++)
                for(j=0; j<l2; j++)
                    scanf("%s", str[i]);

//            printf("asd\n");
//
//            for(i=0; i<l1; i++)
//            {
//                printf("asdf\n");
//                kount = 0;
//                for(j=0; j<i+3; j++)
//                {
//                    printf("asdfg\n");
//                    if(str[i-1][j-1]=='*')
//                        kount++;
//                    else
//                        kount = kount;
//                }
//                ara[i][j]=kount;
//            }
//
//            printf("asd\n");


            for(i=0; i<l1; i++)
                for(j=0; j<l2; j++, printf("\n"))
                    printf("i=%d j=%d = %c", i, j, str[i][j]);

        }

    }


}

