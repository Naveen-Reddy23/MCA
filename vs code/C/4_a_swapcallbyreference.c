#include <stdalign.h>
void swap(int*, int*);
int main()
{
    int a = 100;
    int b = 200;
    printf("Before swapping a= %d  b=%d\n", a, b);
    swap(&a, &b);
    printf("after swapping a: %d b: %d\n", a, b);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}