#include <stdio.h>

int isPerfectNumber(int number);

int main() {
    int num1, num2;
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    if (isPerfectNumber(num1)) {
        printf("true\n");
    }else {
        printf("false\n");
    }

    if (isPerfectNumber(num2)) {
        printf("true");
    }else {
        printf("false");
    }
    
    return 0;
}

int isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number/2; i++){
        if (number % i == 0) {
            sum += i;
        }
    }
    return (number == sum)? 1:0;
}
