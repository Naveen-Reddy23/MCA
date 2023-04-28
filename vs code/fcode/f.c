#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i, pos, value, choice;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nMenu\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Traverse elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the position to insert the element (1 to %d): ", n + 1);
            scanf("%d", &pos);
            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid position\n");
            }
            else
            {
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                for (i = n - 1; i >= pos - 1; i--)
                {
                    arr[i + 1] = arr[i];
                }
                arr[pos - 1] = value;
                n++;
                printf("Element inserted successfully\n");
            }
            break;
        case 2:
            printf("\nEnter the position to delete the element (1 to %d): ", n);
            scanf("%d", &pos);
            if (pos < 1 || pos > n)
            {
                printf("Invalid position\n");
            }
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted successfully\n");
            }
            break;
        case 3:
            printf("\nThe elements of the array are: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 4:
            printf("\nExiting program...\n");
            break;
        default:
            printf("\nInvalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
