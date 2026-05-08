#include <stdio.h>

int main(void)
{
    float celcius;
    printf("Enter your temperature in celcius: ");
    scanf("%f", &celcius);
    float fahrentheit=(celcius*1.8)+32;
    if (celcius<0){
        printf("❄️ Freezing weather\n");
    } else if(celcius<10){
        printf("🥶 Very cold weather\n");
    } else if(celcius<20){
        printf("🧥 Chilly weather\n");
    } else if(celcius<30){
        printf("🖼️ Normal weather\n");
    } else if(celcius<40){
        printf("☀️ Hot weather\n");
    } else{
        printf("🔥 Very hot weather\n");
    }
    printf("%.2fC°:%.2fF°\n", celcius, fahrentheit);
}
