#include <stdio.h>

//  To check given no is power of two
int power_of_two(int n) {
    if (n <= 0) {
        return 0; 
    }
    return (n & (n - 1)) == 0; 
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (power_of_two(n)) {
        printf("%d is a power of two\n", n);
    } else {
        printf("%d is not a power of two\n", n);
    }

    return 0;
}
