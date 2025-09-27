#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            if (b > c)
                printf("Second largest = %d\n", b);
            else
                printf("Second largest = %d\n", c);
        } else {
            printf("Second largest = %d\n", a);
        }
    } else {
        if (b > c) {
            if (a > c)
                printf("Second largest = %d\n", a);
            else
                printf("Second largest = %d\n", c);
        } else {
            printf("Second largest = %d\n", b);
        }
    }
    return 0;
}

