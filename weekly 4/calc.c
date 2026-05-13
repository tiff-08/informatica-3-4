#include <stdio.h>
//1. Prototype
void add(void);
void substract(void);
void multiply(void);
void divide(void);

int main(void){
    printf("-------Calculator------- \n");
    printf("1. Add \n");
    printf("2. Substract\n");
    printf("3. Multiply \n");
    printf("4. Divide\n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d", &user_response);


    if (user_response == 1){
        //3. Call
        add();
    } else if (user_response== 2){
        substract();
    } else if (user_response== 3){
        multiply();
    } else if (user_response== 4){
        divide();
    } else {
        printf("Invalid option \n");
    }
}
//2. Define
void add(void){
     float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the secound number: ");
    scanf("%f", &num2);
    float result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2,result);
}

//2. Define
void substract(void){
     float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the secound number: ");
    scanf("%f", &num2);
    float result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
}


//2. Define
void multiply(void){
     float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the secound number: ");
    scanf("%f", &num2);
    float result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
}


//2. Define
void divide(void){
     float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the secound number: ");
    scanf("%f", &num2);
    float result = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
}

