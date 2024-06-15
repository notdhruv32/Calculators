#include<stdio.h>
#include<windows.h>

int main(){
    int num1, num2, result;
    char opt;
    printf("Heyyy Cutie, I am a simple calcualator which donesn't has a GUI but I can do much more than ur mobile calculator :)\n");
    printf("Enter the 1st no. (or numerator in case of division): ");
    scanf("%d", &num1);
    
    while (getchar() != '\n');
    
    printf("Choose an operator [+ , - , / , * ]: ");
    scanf("%c", &opt);
    
    printf("Enter the 2nd no. (or denominator in case of division): ");
    scanf("%d", &num2);

    if(opt == '+') {
        result = num1 + num2;
        printf("Result: %d", result);
    }
    else if(opt == '-') {
        result = num1 - num2;
        printf("Result: %d", result);
    }
    else if(opt == '/') {
        result = num1 / num2;
        printf("Result: %d", result);
    }
    else if(opt == '*') {
        result = num1 * num2;
        printf("Result: %d", result);
    }
    else {
        printf("An unexpected error occured :(");
    }
    Sleep(3);
    return 0;
    
}

// in progress 