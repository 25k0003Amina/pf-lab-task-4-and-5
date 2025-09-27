#include <stdio.h>

int main() {
    int choice , action;
    printf("Management:\n1 Books\n2 Magazines\n Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("1. Issue Book\n2  Return Book\n");
            scanf("%d", &action);
            switch (action) {
                case 1: printf("Book Issued\n"); break;
                case 2: printf("Book Returned\n"); break;
                default: printf("Invalid action\n");
            }
            break;

        case 2:
            printf("1. Issue Magazine\n2. Return Magazine\n");
            scanf("%d", &action);
            switch (action) {
                case 1: printf("Magazine Issued\n"); break;
                case 2: printf("Magazine Returned\n"); break;
                default: printf("Invalid action\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

