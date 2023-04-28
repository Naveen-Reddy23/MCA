#include <stdio.h>
#include <stdlib.h>
#define n 3
int s[4], top = -1, ele;
void push()
{
    if (top >= n - 1)
        printf("\n stack overflow");
    else
    {
        printf("\n enter the element to insert into the stack\n");
        scanf("%d", &ele);
        top = top + 1;
        s[top] = ele;
    }
}
void pop()
{
    if (top == -1)
        printf("\n stack underflow");
    else
    {
        printf("\n deleted the top ele from the stack: %d", s[top]);
        top = top - 1;
    }
}
void display()
{
    int i;
    if (top == -1)
        printf("\n stack is empty");
    else
        printf("\n elements of stack\n");
    for (i = top; i >= 0; i--)
        printf("%d", s[i]);
}
int main()
{
    int ch;
    do
    {
        printf("\n.....menu......");
        printf("\n enter 1 for push");
        printf("\n enter 2 for pop");
        printf("\n enter 3 for display");
        printf("\n enter 4 for exit");
        printf("\n enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n invalid option");
        }
    } while (ch != 4);

    return 0;
}
