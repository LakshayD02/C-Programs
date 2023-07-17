/*Calculation of gross salary*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bs,gs,da,hra;
    printf ("Enter Basic salary");
    scanf("%d\n",&bs);

    if (bs<1000)
    {
        hra = bs*10/100;
        da = bs*90/100;
    }
    else
    {
        hra = 500;
        da = bs*98/100;
    }
    gs = bs+hra+da;
    printf("Gross salary=Rs. %d\n",gs);
    return 0;
}

