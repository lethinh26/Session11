#include <stdio.h>
void printArray(int arrayInt[], int size);
int main() {
    int arrayInt[] = {1,2,3,4,5}, size = sizeof(arrayInt)/sizeof(int);
    printArray(arrayInt, size);
    return 0;
}

void printArray(int arrayInt[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arrayInt[i]);
    }
    return;
}