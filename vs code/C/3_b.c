#include <stdio.h>
#include <timer.h>
int partition(int a[], int low, int high)
{
    int pvt, temp, i, j, k;
    pvt = a[low];
    i = low + 1;
    j = high;
    while (i <= j)
    {
        while (i <= high && pvt >= a[i])
            i++;
        while (pvt < a[j])
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            k = a[j];
            a[j] = a[low];
            a[low] = k;
        }
    }
    return j;
}

void quick_sort(int a[], int low, int high)
{
    int pvt;
    if (low < high)
    {
        pvt = partition(a, low, high);
        quick_sort(a, low, pvt - 1);
#calling quicksort to the left part of partition
        quick_sort(a, pvt + 1, high);
#calling quicksort to the right part of partition
    }
}
int main()
{
    int a[500], n, i;
    printf("enter the number of terms");
    scanf("%d", &n);
    printf(" Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("% d", &a[i]);
    printf("the elements before sorting are\n");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    quick_sort(a, 0, n - 1);
    printf("\nsorted elements are");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
