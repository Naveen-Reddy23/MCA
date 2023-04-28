//GCD of 3 numbers

#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b, c;
    printf(" Enter 3 integer numbers"); 
    scanf("%d%d%d", &a, &b, &c);
    int res = gcd(a, gcd(b, c));
    printf("GCD of 3 integer numbers is %d", res);
    return 0;
}