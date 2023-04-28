//LCM of 3 numbers

#include <stdio.h>

int calculateLCM(int num1, int num2)
{
    static int comn = 1;

    if (comn % num1 == 0 && comn % num2 == 0)
        return comn;

    comn++;
    calculateLCM(num1, num2);

    return comn;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter Number1: ");
    scanf("%d", &num1);

    printf("Enter Number2: ");
    scanf("%d", &num2);

    printf("Enter Number3: ");
    scanf("%d", &num3);

    printf("The Lowest Common Multiple is: %d\n", calculateLCM(num1, calculateLCM(num2, num3)));

    return 0;
}