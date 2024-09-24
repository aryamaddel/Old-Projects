// Program to calculate the sum/differnce/product/quotient of two numbers

#include <stdio.h>

int main(void){
    int num1, num2, result;
    char op;
    
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Enter operator:");
    scanf(" %c", &op);

    if(op == '+'){
        result = num1 + num2;
    }
    else if(op == '-'){
        result = num1 - num2;
    }
    else if(op == '*'){
        result = num1 * num2;
    }
    else if(op == '/'){
        result = num1 / num2;
    }
    else{
        printf("Invalid operator");
    }

    printf("Result: %d\n", result);
}