#include <stdio.h>
#include <math.h>
void main()
{
    int i, n;
    float sum = 0.0, mean = 0.0, std = 0.0;
    float *ptr;
    printf("Enter size of array : ");
    scanf("%d", &n);
    float a[n];
    printf("Enter elements in the List : ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        std += pow((*ptr - mean), 2);
        ptr++;
    }
    std = sqrt(std / n);
    printf("Sum of all elements = %.2f\n", sum);
    printf("Mean of all elements = %.2f\n", mean);
    printf("Standard deviation of all elements = %.2f\n", std);
}










