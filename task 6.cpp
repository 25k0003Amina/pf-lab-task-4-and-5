#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    int shape, option;
    float radius, length, width, base, height, side1, side2;

    printf("Select a shape:\n1. Circle\n2. Rectangle\n3. Triangle\n");
    scanf("%d", &shape);
    switch (shape) {
        case 1:  
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &option);
            printf("Enter radius: ");
            scanf("%f", &radius);
            switch (option) {
                case 1: printf("Area = %.2f\n",  PI* radius * radius);
				 break;
                case 2: printf("Perimeter = %.2f\n", 2 * PI* radius); 
				break;
                default: printf("Invalid option\n");
            }
            break;

        case 2:  
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &option);
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            switch (option) {
                case 1: printf("Area = %.2f\n", length * width); 
				break;
                case 2: printf("Perimeter = %.2f\n", 2 * (length + width)); 
				break;
                default: printf("Invalid option\n");
            }
            break;

        case 3:  
            printf("1. Area\n2. Perimeter\n");
            scanf("%d", &option);
            if (option == 1) {
                printf("Enter base and height: ");
                scanf("%f %f", &base, &height);
                printf("Area = %.2f\n", 0.5 * base * height);
            } else if (option == 2) {
                printf("Enter all 3 sides: ");
                scanf("%f %f %f", &base, &side1, &side2);
                printf("Perimeter = %.2f\n", base + side1 + side2);
            } else {
                printf("Invalid option\n");
            }
            break;

        default:
            printf("Invalid shape\n");
    }

    return 0;
}

