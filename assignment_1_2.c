#include <stdio.h>

#define squared(x) ((x) * (x))

int main(int argc, char** argv) {
  double ans = 18.0 / squared(2 + 1);
  printf("ans = %lf\n", ans);
  return 0;
}
