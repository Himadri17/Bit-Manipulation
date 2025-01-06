#include <stdio.h>
//divide using two integers
int divide(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1;
    }

    
    int sign = 1; 
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        sign = -1; 
    }

    if (dividend < 0) {
        dividend = -dividend;
    }
    if (divisor < 0) {
        divisor = -divisor;
    }

    int quotient = 0;

 
    while (dividend >= divisor) {
        int tempDivisor = divisor, multiple = 1;


        while (dividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }

        dividend -= tempDivisor;
        quotient += multiple;
    }

    if (sign == -1) {
        quotient = -quotient;
    }

    return quotient;
}

int main() {
    int dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    int result = divide(dividend, divisor);
    if (result != -1) {
        printf("The result of %d divided by %d is: %d\n", dividend, divisor, result);
    }

    return 0;
}