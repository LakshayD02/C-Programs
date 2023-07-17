/*Printing Odd/Even Numbers using IF-ELSE Statement*/

#include <stdio.h>

int main()
{
    int num;
    printf ("Enter any Number - ");     /*User Defined*/
    scanf("%d" , &num);

    if (num%2==0)
    printf ("Number is Even");

    else
    printf ("Number is Odd");
    return 0;
}
