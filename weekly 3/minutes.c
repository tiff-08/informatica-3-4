#include <stdio.h>

int main(void)
{
    int total_minutes;
    printf("Movie runing time: ");
    scanf("%d", &total_minutes);

    int start_h;
    int start_m;
    printf("Start time: ");
    scanf("%d:%d", &start_h, &start_m);

    int hours = total_minutes / 60;
    int min = total_minutes % 60;

    int end_h = start_h + hours;
    int end_m = start_m + min;

    if (end_m >= 60) {
        end_h = end_h + (end_m / 60); // Update variable value
        end_m = end_m % 60;//

    }

    printf("The movie will last %d hr and %d min.\n", hours, min);
    printf("End time: %d:%02d\n", end_h, end_m);
}
