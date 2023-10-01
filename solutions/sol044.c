#include <stdio.h>

int main() {
    int num;

    // Using a while loop
    printf("Even numbers between 50 and 100 using a while loop:\n");
    num = 50;
    while (num <= 100) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");

    // Using a do-while loop
    printf("Even numbers between 50 and 100 using a do-while loop:\n");
    num = 50;
    do {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    } while (num <= 100);
    printf("\n");

    // Using a for loop
    printf("Even numbers between 50 and 100 using a for loop:\n");
    for (num = 50; num <= 100; num++) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
