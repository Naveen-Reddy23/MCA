#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 3
int q[SIZE], r = -1, f = 0, cnt = 0;
void display();
void insert()
{
    int num;
    if (cnt == SIZE)
        printf("\n Queue Overflow \n");
    else
    {
        printf("\nEnter the number to be inserted: ");
        scanf("%d", &num);
        r = (r + 1) % SIZE;
        q[r] = num;
        cnt++;
    }
}
void del1()
{
    if (cnt == 0)
        printf("\n Queue underflow\n");
    else
    {
        printf("\nThe deleted number is: %d\n", q[f]);
        if (r == f)
        {
            r = -1;
            f = 0;
        }
        else
            f = (f + 1) % SIZE;
        cnt--;
    }
}
void display()
{
    int i;
    printf("-------- QueueSTATUS --------- ");
    if (cnt == 0)
        printf("\n Queue empty\n");
    else
    {
        printf("\nQueue: ");
        for (i = f; i != r; i = (i + 1) % SIZE)
            printf("%d\n", q[i]);
        printf("%d", q[r]);
    }
}
int main()
{
    int ch = 1;
    while (ch)
    {
        printf("\n*************Circular Queue Operation ************** \n");
        printf("\n-------- Menu ---------");
        printf("\n Enter 1 to insert ");
        printf("\n Enter 2 to delete ");
        printf("\n Enter 3 to display ");
        printf("\n Enter 4 to exit ");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del1();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
    getch();
    return 0;
}
