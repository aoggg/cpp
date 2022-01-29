#ifndef FUNCTION04_H_
#define FUNCTION04_H_

#include <stdio.h>

void sort_by_abs (int array[], int size);

int main() {
    int size;
    scanf("%d", &size);
    int array[100000];
    for (int i = 0; i < size; i ++) {
        scanf("%d", &array[i]);
    }
    sort_by_abs(array, size);
    for (int i = 0; i < size; i ++) {
        printf("%d%c", array[i], " \n"[i == size - 1]);
    }
    return 0;
}
#endif // FUNCTION4_H_

