#include<stdio.h>

int main(){
    float principle, rate, time, interest;
    printf("SBI bot: I'll calculate ur total amount to be paid for ur loan\n");
    printf("SBI bot: Enter the principle\nYou: ");
    scanf("%f", &principle);
    printf("SBI bot: Enter the rate percemtage\nYou: ");
    scanf("%f", &rate);
    printf("SBI bot: Enter the time (in years)\nYou: ");
    scanf("%f", &time);
    interest = principle * (rate/100) * time;
    float amt;
    amt = principle + interest;
    printf("SBI bot: Your total amount to be paid: %f", amt);
    return 0;
}