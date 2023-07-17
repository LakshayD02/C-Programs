/*Calculation of Simple interest*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,n,r,si;

    p = 1000;
    n = 3;
    r = 8.5;

    si = p*r*n/100;

    printf ("%d\n",si);
    return 0;
}