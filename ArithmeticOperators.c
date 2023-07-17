/*Arithmetic Operators*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e,f;
    a = 10;
    b = 5;

    /*Subtraction*/
    c = a-b;
    /*Addition*/
    d = a+b;
    /*Division*/
    e = a/b;
    /*Multiplication*/
    f = a*b;

    printf ("Sum is %d\n",d);

    printf ("Difference is %d\n",c);

    printf ("Ratio is %d\n",e);

    printf ("Multiplication is %d\n",f);

    /*Incrment and Decrement*/

    /*Pre Increment and Decrement*/
    printf ("a=%d\n",a);
    printf ("Pre Increment is %d\n",++a);
    printf ("Pre Decrement is %d\n",--a);

    /*Post Increment and Decrement*/
    printf ("a=%d\n",a);
    printf ("Post Increment is %d\n",a++);
    printf ("Post Decrement is %d\n",a--);
    printf ("a=%d\n",a);
    return 0;
}
