/*Program to check whether the number is prime or not*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x;
    printf ("Enter the number = ");
    scanf ("%d",&x);  //User Defined

    if(x<=0)
        {
        printf ("Enter a valid number");
    }
    else if (x==1)
    {
        printf("1 is a Prime Number");
    }
    else
    {
        for (int i=2; i<=x; ++i)
            if (x%i==0)
        {
            if (i==x)
            {
                printf("The number is Prime");
            }
        else
        {
            printf ("The number is Non-Prime");
        }
        break;
        }
        else
            continue;
return 0;
    }
     printf ("Factorial of %d is %d",n,fact);
    }
    return 0;
}
