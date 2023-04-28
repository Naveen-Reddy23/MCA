#include <stdio.h>
int main()
{
    int n, pos, ele, i, op;
    printf("Enter the size of the aray\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nChoose your option\n");
    printf("1.Insert element\n");
    printf("2.Delete element\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter the position you want to insert\n");
        scanf("%d", &pos);
        printf("Enter the element you want to insert\n");
        scanf("%d", &ele);
        if (pos > n)
            printf("Invalid Input");
        else
        {
            for (i = n - 1; i >= pos - 1; i--)
                arr[i + 1] = arr[i];
            arr[pos] = ele;
            printf("Array after insertion is:\n");
            for (i = 0; i <= n; i++)
                printf("%d\n", arr[i]);
        }
        break;
    case 2:
        printf("Enter the position : ");
        scanf("%d", &pos);
        if (pos >= n + 1)
            printf("\nDeletion not possible.\n");
        else
        {
            for (i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];
            printf("Array after deletion\n");
            for (i = 0; i < n - 1; i++)
                printf("%d\n", arr[i]);
        }

    default:
        break;
    }

    return 0;
}