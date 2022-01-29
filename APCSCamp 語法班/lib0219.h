#ifndef FUNCTION05_HEADER
#define FUNCTION05_HEADER

#include <stdio.h>

void selection_sort(int array[], int size);

int main() {
    int array[100000], size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    selection_sort(array, size);
    for (int i = 0; i < size; i++) {
        printf("%d%c", array[i], " \n"[i+1==size]);
    }
    return 0;
}

#endif  // FUNCTION05_HEADER
