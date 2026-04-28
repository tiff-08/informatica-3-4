#include <stdio.h>

int main(void)
{
    int Minutes;
    int Starttime;
    printf("Enter run time of the movie: \n");
    scanf("%d", &Minutes);
    printf("Enter start time: \n");
    scanf("%d", &Starttime);
    printf("\n");
    int Runtime= Minutes/60;
    int Runtime2= Minutes%60;
    int Endtime= Starttime+Runtime;
    int Endtime2 = Starttime+Runtime2;
    printf("The movie will last %d hours and %d minutes\n", Runtime, Runtime2);
    printf("End Time %d:%d \n", Endtime, Endtime2);
}
