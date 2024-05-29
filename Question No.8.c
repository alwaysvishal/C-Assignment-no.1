//Vishal Gupta
//Roll no.2303510100108


#include <stdio.h>

int main()
{
    int total_minutes, hours, minutes;

    printf("Enter number in minutes: ");
    scanf("%d", &total_minutes);

    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    printf("%02d : %02d\n", hours, minutes);
    return 0;
}
