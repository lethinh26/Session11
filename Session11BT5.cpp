#include <stdio.h>

int isPrime(int number);

int main() {
    int num1, num2;
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    if (isPrime(num1)) {
        printf("true\n");
    }else {
        printf("false\n");
    }

    if (isPrime(num2)) {
        printf("true");
    }else {
        printf("false");
    }
    
    return 0;
}

int isPrime(int number) {
    if (number < 2) {
        return 0;
    }
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
