#include <stdio.h>

int main(void)
{
    float Fahrenheit;
    printf("Enter the tempeture in Fahrenheit: \n");
    scanf("%f", &Fahrenheit);
    float Celcius = (Fahrenheit-32)/1.8;
    printf("%.2f°F is equal to %.2f°C\n", Fahrenheit, Celcius);
    //Fahrenheit and Celcius are equal in -40°

}
