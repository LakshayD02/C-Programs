/*Progarm for Fibonacci series*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    //0 1 2 3 4 5 6 7 8 9...........N
    int a = 0;
    int b = 1;
    int c = 2;
    int i,n;
    printf ("Enter the Number = ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf ("%d", a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}