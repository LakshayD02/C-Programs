#include <stdio.h>
int stack[6];
int top = -1;
void push (int);
void pop();
void traverse(void);

int main ()
{
    push (7);
    push (8);
    push (3);
    push (6);
    push (2);
    push (1);
    pop();
    push (15);
    push (20);
    push (30);
    pop();

    printf ("\nStack formed is :");
    traverse();
    return 0;
}
void push (int a)
{
    if (top==4)
    {
        printf("\nYour Stack is Overflow");
    }
    else{
        top++;
        stack[top] = a;
        printf("\nPushed element is %d",stack[top]);
    }
}
void pop()
{
    int temp;
    if (top==-1)
    {
        printf ("\nYour Stack is underflow");
    }
    else{
        temp = stack[top];
        top--;
        printf("\nPopped element is %d",temp);
    }
}
void traverse()
{
    for (int i=top; i>=0; i--)
    {
        printf ("\n%d",stack[i]);
    }
}