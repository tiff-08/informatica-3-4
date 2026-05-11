#include <stdio.h>
//1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
    printf("Temperature Converter \n");
    printf("1. Celcius to Fahrenheit \n");
    printf("2. Fahrenheit to Celcius \n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d", &user_response);

    if (user_response == 1){
        //3. Call
        c_to_f();
    } else if (user_response== 2){
        f_to_c();
    } else {
        printf("Invalid option \n");
    }

}

//2. Define
void c_to_f(void){
     float celcius;
    printf("Enter your temperature in celcius: ");
    scanf("%f", &celcius);
    float fahrentheit=(celcius*1.8)+32;
    printf("%.2fC°:%.2fF°\n", celcius, fahrentheit);
}
void f_to_c(void){
     float f;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &f);
    float c=(f - 32)/1.8;
    printf("%.2fC°:%.2fF°\n", f, c);
}
