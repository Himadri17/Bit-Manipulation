#include <stdio.h>

//   square of a number
int square(int n) {
    if (n < 0) {
        n = -n;
    }

    int result = 0, times = n;
    while (times > 0) {
        if (times & 1) {
            result += n; 
        }
        n <<= 1;
        times >>= 1;
    }
    return result;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));

    return 0;
}
