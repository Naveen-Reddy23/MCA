#include<stdio.h>
int addnumbers(int n);
int main()
{
    int num;
    printf("Enter a positive integer\n");
    scanf("%d", &num);
    printf("Sum = %d",addnumbers(num));
    return 0;
}
int addnumbers(int n)
{
    if(n != 0)
    return n + addnumbers(n - 1);
    else
    return n;
}
    