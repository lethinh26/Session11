#include <stdio.h>
int factorialNumber(int number);
int main() {
    int num = 5;
    printf("%d! = %d", num, factorialNumber(num));
    return 0;
}
int factorialNumber(int number) {
    int res = 1;
    for (int i = 1; i <= number; i++) {
        res *= i;
    }
    return res;
}