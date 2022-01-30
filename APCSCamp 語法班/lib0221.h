#ifndef FUNCTION07_H_
#define FUNCTION07_H_

#include <stdio.h>
#include <stdlib.h>

void sort_by_length (char* strings[], int size);

int main() {
    int size;
    scanf("%d", &size);
    char** strings;
    strings = (char**) malloc(sizeof(char*) * 100000);
    for (int i = 0; i < size; i ++) {
        strings[i] = (char*) malloc(sizeof(char) * 21);
        scanf("%s", strings[i]);
    }
    sort_by_length(strings, size);
    for (int i = 0; i < size; i ++) {
        printf("%s%c", strings[i], " \n"[i == size - 1]);
    }
    return 0;
}
#endif // FUNCTION7_H_

