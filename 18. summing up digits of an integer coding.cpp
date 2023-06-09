#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("The sum of the digits is %d\n", sum);

    return 0;
}
