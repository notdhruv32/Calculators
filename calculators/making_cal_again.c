#include<stdio.h>

int main(){
    float num1, num2, result;
    char opt;
    printf("Enter the 1st No. or Numerator = ");
    scanf("%f", &num1);
    printf("Enter the second no. or Denominator = ");
    scanf("%f", &num2);
    printf("Operator : ");
    scanf(" %c", &opt);
    if(opt == '+') {
        result = num1 + num2;
        printf("Result = %f", result);
    }
    else if(opt == '-') {
        result = num1 - num2;
        printf("Result = %f", result);
    }
    else if(opt == '*'){
        result = num1 * num2;
        printf("Result = %f", result);
    }
    else if(opt == '/'){
        result = num1/num2;
        printf("Result = %f", result);
    }
    else{
        printf("Error 404: Invalid Operator");
    }
    return 0;
}

