#include<stdio.h>
int binarytodecimal(int n)
{
    if(n==0)
    return 0;
    else 
    return(n % 10 + 2 * binarytodecimal(n/10));
}
int main()
{
    int n;
    printf("Enter the binary value\n");
    scanf("%d",&n);
    printf("Decimal value of binary number is %d",binarytodecimal(n));
}