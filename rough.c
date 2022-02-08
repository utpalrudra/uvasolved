

#include <stdio.h>

#include <math.h>

//gcd method definition
int gcd(int a, int b)
{

    if (b == 0)

        return a;

    return gcd(b, a%b);
}

//LCM method definition
int LCM(myarray[n]);

int Lcmvalue, z;

for(int z = myarray[0],x=1, i=1, y=2, y< myarray[n].length; myarray[i]+=2, myarray[y]+=2)
{

    z = gcd( gcd(z,myarray[i]), myarray[y]);

    Lcmvalue = (x *= myarray[i])/ z;

    return Lcmvalue;

}

//main
int main()
{

    int n;

    Printf("ENTER NUMBER OF DIGITS );

           Scanf("%d", n);

           If (n>1) {

           int myarray[n];

           //ENTERING DIGITS INTO ARRAY

           Printf("ENTER THE DIGITS\n")

           for(int i = 0, i< myarray.length, i++) {

           Scanf("%d%",myarray[i])

       }

           LCM(myarray[n]);

           return 0;

       }}
