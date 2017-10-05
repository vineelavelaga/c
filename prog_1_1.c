#include <stdio.h>

int main(int argc, char** argv) {
  double mark1 = 0;
  double mark2 = 0;
  double percentage = 0;
  scanf("%lf", &mark1);
  scanf("%lf", &mark2);
  percentage = ((mark1 + mark2) / 200.0) * 100.0;
  if (percentage > 40.0) {
    printf("pass\n");
  } else {
    printf("fail\n");
  }
  return 0;
}
