#include<stdio.h>
int main()
{
    char a[12][7];
    a[0][1]=' ';
    a[1][1]='.';
    a[1][2]=',';
    a[1][3]='?';
    a[1][4]='"';
    a[2][1]='a';
    a[2][2]='b';
    a[2][3]='c';
    a[3][1]='d';
    a[3][2]='e';
    a[3][3]='f';
    a[4][1]='g';
    a[4][2]='h';
    a[4][3]='i';
    a[5][1]='j';
    a[5][2]='k';
    a[5][3]='l';
    a[6][1]='m';
    a[6][2]='n';
    a[6][3]='o';
    a[7][1]='p';
    a[7][2]='q';
    a[7][3]='r';
    a[7][4]='s';
    a[8][1]='t';
    a[8][2]='u';
    a[8][3]='v';
    a[9][1]='w';
    a[9][2]='x';
    a[9][3]='y';
    a[9][4]='z';
    int test, kase, i, j, k, len;
    int ara1[1000], ara2[1000];
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        scanf("%d", &len);
        for(i=0; i<len; i++)
            scanf("%d", &ara1[i]);
        for(i=0; i<len; i++)
            scanf("%d", &ara2[i]);
        for(i=0; i<len; i++)
            printf("%c", a[ara1[i]][ara2[i]]);
        printf("\n");
    }
    return 0;
}
