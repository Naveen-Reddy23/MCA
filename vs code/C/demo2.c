
#include <stdio.h>
#include <conio.h>

struct cricket
{
    char p_name[20];
    char team_name[20];
    float batting_avg;
};

int main()
{
    struct cricket s[5], t;
    int i, j, n = 5;
    float p;
    printf("\nEnter data of %d players", n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Player Name Team Name Batting Avg for player %d = ", i + 1);
        scanf("%s %s %f", s[i].p_name, s[i].team_name, &p);
        s[i].batting_avg = p;
    }

    printf("\nPlayer list is ");
    for (i = 0; i < n; i++)
    {
        printf("\n%-20s %-20s %.2f", s[i].p_name, s[i].team_name, s[i].batting_avg);
    }
    return 0;
}
