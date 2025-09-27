#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate = 10.0, time, emi;
    int type;

    printf("Enter loan amount: ");
    scanf("%f", &principal);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Enter interest type (1 for Simple, 2 for Compound): ");
    scanf("%d", &type);

    if (type == 1) {
        float si= (principal * rate * time) / 100;
        emi = (principal + si) / (time * 12);
        printf("Simple Interest EMI = %.2f\n", emi);
    } else if (type == 2) {
        float amount = principal * pow((1 + rate / 100), time);
        emi = amount / (time * 12);
        printf("Compound Interest EMI = %.2f\n", emi);
    } else {
        printf("Invalid interest type.\n");
    }

    return 0;
}

