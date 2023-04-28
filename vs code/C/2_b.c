#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], i, j, key, n;
    printf("how many elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements before sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    printf("\n Elements after sorting: ");
    for (i = 0; i < n; i++)
        printf("%d \t", a[i]);
    getch();
}