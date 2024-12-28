#include <stdio.h>
int arrayInt[] = {1,2,3,4,5};
int size = sizeof(arrayInt)/sizeof(int);

int maxArray();

int main() {
    printf("Gia tri lon nhat cua mang la: %d", maxArray());
    return 0;
}

int maxArray() {
    int max = arrayInt[0];
    for (int i = 0; i < size; i++) {
        if (max < arrayInt[i]) {
            max = arrayInt[i];
        }
    }
    return max;
}