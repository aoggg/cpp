// ZJ h035
// 2024-10-23

#include <stdio.h>
#include <stdbool.h>
#define MAXN 15

void init(int arr[], bool hit[], bool count[]) {
    for (int i = 0; i < 10; i++) {
        arr[i] = 0;
        hit[i] = false;
        count[i] = false;
    }
}

bool check(bool hit[]) {
    for (int i = 1; i <= 9; i++) {
        if (!hit[i]) return false;
    }
    return true;
}

void status_update(int time[], bool hit[]) {
    for (int i = 1; i <= 9; i++) {
        if (time[i] > 0) {
            time[i]--;
            if (time[i] == 0) hit[i] = false;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int time[MAXN];
    bool hit[MAXN], count[MAXN];
    init(time, hit, count);
    bool perfect = false;
    int score = 0;
    while (N-- && !perfect) {
        int X;
        scanf("%d", &X);
        if (X != -1) {
            if (!hit[X]) {
                hit[X] = true;
                time[X] = 12;
                if (!count[X]) {
                    count[X] = true;
                    score += X;
                }
            }
        }
        if (check(hit)) perfect = true;
        status_update(time, hit);
    }
    if (perfect) printf("perfect\n");
    else printf("%d\n", score);
    return 0;
}