// ZJ b944
// 2024-10-18

#include <stdio.h>
#include <stdbool.h>
#define MAXN 25

typedef struct {
    int people;
    int time;
} info;

const info VACANT = {-1, -1};

void init(int n, info toilet[]) {
    for (int i = 0; i < n; i++) toilet[i] = VACANT;
}

bool same(info a, info b) {
    if (a.people == b.people && a.time == b.time) return true;
    return false;
}

void find_toilet(int n, info toilet[], int id, int time) {
    for (int i = 0; i < n; i++) {
        if (same(toilet[i], VACANT) && (i - 1 < 0 || same(toilet[i - 1], VACANT)) && (i + 1 >= n || same(toilet[i + 1], VACANT))) {
            toilet[i].people = id;
            toilet[i].time = time;
            return;
        }
    }
    // for (int i = 0; i < n; i++) {
    //     if (same(toilet[i], VACANT) && ((i - 1 >= 0 && same(toilet[i - 1], VACANT)) || (i + 1 < n && same(toilet[i + 1], VACANT)))) {
    //         toilet[i].people = id;
    //         toilet[i].time = time;
    //         return;
    //     }
    // }
    for (int i = 0; i < n; i++) {
        if (same(toilet[i], VACANT)) {
            toilet[i].people = id;
            toilet[i].time = time;
            return;
        }
    }
    printf("  Not enough\n");
}

void print_status(int n, info toilet[]) {
    printf("Number:");
    for (int i = 0; i < n; i++) {
        if (same(toilet[i], VACANT)) printf(" 0");
        else printf(" %d", toilet[i].people);
    }
    printf("\n");
    printf("  Time:");
    for (int i = 0; i < n; i++) {
        if (same(toilet[i], VACANT)) printf(" 0");
        else printf(" %d", toilet[i].time);
    }
    printf("\n");
}

void update_status(int n, info toilet[]) {
    for (int i = 0; i < n; i++) {
        toilet[i].time--;
        if (toilet[i].time <= 0) toilet[i] = VACANT;
    }
}

int main() {
    int n;
    info toilet[MAXN];
    scanf("%d", &n);
    init(n, toilet);
    int a, b;
    int first_time = true;
    while (scanf("%d %d", &a, &b) != EOF) {
        if (!first_time) printf("\n");
        first_time = false;
        find_toilet(n, toilet, a, b);
        print_status(n, toilet);
        update_status(n, toilet);
    }
    return 0;
}