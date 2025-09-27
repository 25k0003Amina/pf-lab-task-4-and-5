#include <stdio.h>

int main() {
    int category, item;
    printf("Select Category:\n1. Fast Food\n2. Drinks\n");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("1. Burger\n2. Pizza\n");
            scanf("%d", &item);
            switch (item) {
                case 1: printf("You ordered Burger\n"); 
				break;
                case 2: printf("You ordered Pizza\n"); 
				break;
                default: printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("1. Coke\n2. Juice\n");
            scanf("%d", &item);
            switch (item) {
                case 1: printf("You ordered Coke\n"); 
				break;
                case 2: printf("You ordered Juice\n"); 
				break;
                default: printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid option\n");
    }
    return 0;
}

