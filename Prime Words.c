#include <stdio.h>
#include <math.h>
#include <string.h>
int test(int n)
{
    if(n%2 == 0 && n>2) return 0;
    int i, j, k, l,  root = sqrt(n);

    for(i=3; i<=root+1; i+=2)
        if(n%i == 0)
            return 0;

    return 1;
}
int main()
{
    int i, j, k, len, num;
    char str[27];
    while(scanf("%s", str) != EOF)
    {
        len = strlen(str);
        num = 0;
        for(i=0; i<len; i++)
        {
            if(str[i] == 'a')
                num++;
            else if(str[i] == 'b')
                num = num + 2;
            else if(str[i] == 'c')
                num = num + 3;
            else if(str[i] == 'd')
                num = num + 4;
            else if(str[i] == 'e')
                num = num + 5;
            else if(str[i] == 'f')
                num = num + 6;
            else if(str[i] == 'g')
                num = num + 7;
            else if(str[i] == 'h')
                num = num + 8;
            else if(str[i] == 'i')
                num = num + 9;
            else if(str[i] == 'j')
                num = num + 10;
            else if(str[i] == 'k')
                num = num + 11;
            else if(str[i] == 'l')
                num = num + 12;
            else if(str[i] == 'm')
                num = num + 13;
            else if(str[i] == 'n')
                num = num + 14;
            else if(str[i] == 'o')
                num = num + 15;
            else if(str[i] == 'p')
                num = num + 16;
            else if(str[i] == 'q')
                num = num + 17;
            else if(str[i] == 'r')
                num = num + 18;
            else if(str[i] == 's')
                num = num + 19;
            else if(str[i] == 't')
                num = num + 20;
            else if(str[i] == 'u')
                num = num + 21;
            else if(str[i] == 'v')
                num = num + 22;
            else if(str[i] == 'w')
                num = num + 23;
            else if(str[i] == 'x')
                num = num + 24;
            else if(str[i] == 'y')
                num = num + 25;
            else if(str[i] == 'z')
                num = num + 26;
            else if(str[i] == 'A')
                num = num + 27;
            else if(str[i] == 'B')
                num = num + 28;
            else if(str[i] == 'C')
                num = num + 29;
            else if(str[i] == 'D')
                num = num + 30;
            else if(str[i] == 'E')
                num = num + 31;
            else if(str[i] == 'F')
                num = num + 32;
            else if(str[i] == 'G')
                num = num + 33;
            else if(str[i] == 'H')
                num = num + 34;
            else if(str[i] == 'I')
                num = num + 35;
            else if(str[i] == 'J')
                num = num + 36;
            else if(str[i] == 'K')
                num = num + 37;
            else if(str[i] == 'L')
                num = num + 38;
            else if(str[i] == 'M')
                num = num + 39;
            else if(str[i] == 'N')
                num = num + 40;
            else if(str[i] == 'O')
                num = num + 41;
            else if(str[i] == 'P')
                num = num + 42;
            else if(str[i] == 'Q')
                num = num + 43;
            else if(str[i] == 'R')
                num = num + 44;
            else if(str[i] == 'S')
                num = num + 45;
            else if(str[i] == 'T')
                num = num + 46;
            else if(str[i] == 'U')
                num = num + 47;
            else if(str[i] == 'V')
                num = num + 48;
            else if(str[i] == 'W')
                num = num + 49;
            else if(str[i] == 'X')
                num = num + 50;
            else if(str[i] == 'Y')
                num = num + 51;
            else if(str[i] == 'Z')
                num = num + 52;
        }

        j = test(num);
        if(j==1 || num == 1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }

    return 0;
}
