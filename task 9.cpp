#include <stdio.h>

int main() {
    int department, course;
    printf("Select Department:\n1 CS\n2 EE\n3 BBA\n");
    scanf("%d", &department);

    switch (department) {
        case 1:
            printf("1. Data Structures\n2. Operating Systems\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Data Structures\n"); break;
                case 2: printf("You selected Operating Systems\n"); break;
            }
            break;

        case 2:
            printf("1. Circuits\n2. Power Systems\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Circuits\n"); break;
                case 2: printf("You selected Power Systems\n"); break;
            }
            break;

        case 3:
            printf("1. Marketing\n2. Finance\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Marketing\n"); break;
                case 2: printf("You selected Finance\n"); break;
            }
            break;
    }
    return 0;
}

