#ifndef FUNCTION06_H_
#define FUNCTION06_H_

#include <stdio.h>
#include <stdlib.h>

double average(int scores[], int size);

int main() {
  int n; scanf("%d", &n);
  int *scores = new int[n];
  for(int i = 0; i < n; i++) scanf("%d", scores + i);
  double ans = average(scores, n);
  printf("%.6f\n", ans);
  return 0;
}
#endif // FUNCTION06_H_

