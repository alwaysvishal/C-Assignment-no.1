// Vishal Gupta
// Roll no.2303510100108


#include <stdio.h>

int main()
{
    int days, years, weeks, remaining_days;
    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining_days = days % 365;
    weeks = remaining_days / 7;
    remaining_days = remaining_days % 7;

    printf("%d Years: %d Weeks: %d Days\n", years, weeks, remaining_days);
    return 0;
}
