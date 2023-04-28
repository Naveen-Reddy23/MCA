#include <stdio.h>
int Linear(int[], int);
int Binary(int[], int);
int main()
{
    int first, last, middle, n, search, array[10], choice;
    printf("\nWhich Method you want to use for Searching:\n 1. Linear Search\n 2. Binary Search\n");
    printf("Enter your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        Linear(array, search);
        break;

    case 2:
        Binary(array, search);
        break;

    default:
        printf("Invalid Input");
        break;
    }
}
int Linear(int array[], int search)
{
    int temp = 0, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter value to find:");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            printf("\nElement %d is found in %d Position", search, i + 1);
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        printf("\nElement Not found");
    }
}

int Binary(int array[], int search)
{
    int f, m, l, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter value to find:");
    scanf("%d", &search);
    f = 0, l = n - 1;
    m = (l + f) / 2;
    while (f <= l)
    {
        if (array[m] == search)
        {
            printf("\nElement %d is found at %d Position", search, m + 1);
            break;
        }
        else if (array[m] < search)
        {
            f = m + 1;
        }
        else
        {
            l = m - 1;
        }
        m = (l + f) / 2;
    }
    if (f > l)
    {
        printf("\nElement Not found");
    }
}