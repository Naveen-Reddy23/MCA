
#include <stdio.h>
struct student
{
    char firstname[64];
    char id[64];
    char lastname[64];
    int score;
};
void displayDetail(struct student std);
int main(void)
{
    struct student stdArr[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter details of student #%d\n", (i + 1));
        printf("Enter First name \n");
        scanf("%s", stdArr[i].firstname);
        printf("Enter Last Name\n");
        scanf("%s", stdArr[i].lastname);
        printf("Enter ID\n");
        scanf("%s", stdArr[i].id);
        printf("Enter Score\n");
        scanf("%d", &stdArr[i].score);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\nstudent #%d Detail:\n", (i + 1));
        displayDetail(stdArr[i]);
    }
    return 0;
}
void displayDetail(struct student std)
{
    printf("\nFirst Name %s\n", std.firstname);
    printf("\nLast Name %d\n", std.lastname);
    printf("\nID %s\n", std.id);
    printf("\nScore %d\n", std.score);
}
