#include <stdio.h>

int main(int argc, char** argv) {
  int num1;
  int num2;
  int sum;
  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("Enter another number: ");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("(%d + %d) = %d\n", num1, num2, sum);
  return 0;
}
