/*Demonstration of IF Statement*/

#include <stdio.h>

int main()
{
    int num;
    printf ("Enter any Number");
    scanf("%d" , &num);

    if (num%2==0)
    printf ("Number is Even");
    else
    printf ("Number is Odd");
    return 0;
}