#include <stdio.h>

int main()
{
    int length(char str[100]);
    int compare(char s1[100], char s2[100]);
    void concat(char s1[100], char s2[100]);

    int option, result;
    char str[100], s1[100], s2[100];
    printf("1.String length\n");
    printf("2.String comparision\n");
    printf("3.String concatenation\n");
    printf("4.quit\n");
    printf("Enter your choice\n");
    scanf("%d", &option);
    if (option != 1 || option != 2 || option != 3 || option != 4)
    {
        printf("Invalid option");
    }
    else
    {
        do
        {
            switch (option)
            {
            case 1:
                printf("Enter string\n");
                scanf("%s", &str);
                result = length(str);
                printf("The length of the string = %d\n", result);
                break;
            case 2:
                printf("Enter first string\n");
                scanf("%s", s1);
                printf("Enter second string\n");
                scanf("%s", s2);
                result = compare(s1, s2);
                if (result == 0)
                {
                    printf("strings are equal\n");
                }
                else
                {
                    printf("strings are not equal\n");
                }
                break;
            case 3:
                printf("Enter two strings\n");
                scanf("%s%s", s1, s2);
                concat(s1, s2);
                printf("result=%s\n", s1);
                break;
            default:
                printf("Invalid Input");
            }
        } while (option <= 3);
        return 0;
    }
}

int length(char str[100])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int compare(char s1[100], char s2[100])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
            return (-1);
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 0;
    }
    else if (s1[i] != '\0')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void concat(char s1[100], char s2[100])
{
    int i, j;
    i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    for (j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}