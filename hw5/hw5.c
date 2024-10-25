#include <stdio.h>

void toBinary(int n) {
    if (n == 0) {
        return;
    }
    toBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("0");
    }
    else {
        toBinary(number);
    }
    printf("\n");

    return 0;
}
