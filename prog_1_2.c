#include <stdio.h>

int main(int argc, char** argv) {
  double celsius;
  double fahrenheit;
  printf("Enter fahrenheit: ");
  scanf("%lf" , &fahrenheit);
  celsius  = (fahrenheit - 32.0) / 1.8;
  printf("%lf F = %lf C\n", fahrenheit, celsius);
  return 0;
}
