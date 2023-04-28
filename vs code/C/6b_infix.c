#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ch, stack[50], infix[50];
    int i, j, top = 0;
    stack[0] = ')';
    printf("\n infix to postfix exp\n");
    printf("\n enter the infix exp\n");
    gets(infix);
    j = strlen(infix);
    printf("\n the postfix exp is:\n");
    for (i = 0; i < j; i++)
    {
        ch = infix[i];
        if (((ch >= '0') && (ch <= '9')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
            printf("%c", ch);
        if (ch == '^')
        {
            while (stack[top] == '^')
                printf("%c", stack[top--]);
            stack[++top] = ch;
        }
        if ((ch == '*') || (ch == '/'))
        {
            while ((stack[top] == '*') || (stack[top] == '/') || (stack[top] == '^'))
                printf("%c", stack[top--]);
            stack[++top] = ch;
        }
        if ((ch == '+') || (ch == '-'))
        {
            while ((stack[top] == '^') || (stack[top] == '*') || (stack[top] == '/') || (stack[top] == '+') || (stack[top] == '-'))
            {
                printf("%c", stack[top--]);
            }
            stack[++top] = ch;
        }
        if (ch == '(')
        {
            stack[++top] = ch;
        }
        if (ch == ')')
        {
            while (stack[top] != '(')
            {
                printf("%c", stack[top--]);
                fflush(stdin);
            }
            top--;
        }
    } // End of for loop
    while (stack[top] != ')')
        printf("%c", stack[top--]);
    fflush(stdin);
    getch();
    return 0;
}
