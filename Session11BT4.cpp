#include <stdio.h>
int maxArray(int arrayInt[], int size);

int main() {
    int arrayInt[] = {1,2,3,4,5};
    int size = sizeof(arrayInt)/sizeof(int);
    printf("Gia tri lon nhat cua mang la: %d", maxArray(arrayInt, size));
    return 0;
}

int maxArray(int arrayInt[], int size) {
    int max = arrayInt[0];
    for (int i = 0; i < size; i++) {
        if (max < arrayInt[i]) {
            max = arrayInt[i];
        }
    }
    return max;
}
