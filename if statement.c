/*Demonstration of IF Statement*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Bonus,a,b,c;
    printf ("Enter your First no. and Second no.");
    scanf("%d %d", &a, &b);
    c = a-b;
    if (c<3)
    {
        Bonus = 5;
        printf ("Bonus = %d\n", Bonus);
    }
    return 0;
}
