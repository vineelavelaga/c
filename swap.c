#include <stdio.h>

void print_swap(int x, int y);

int main(int argc, char** argv) {
  int x = 3;
  int y = 5;
  print_swap(x, y);
  return 0;
}

void print_swap(int x,int y) {
  printf("x = %d, y = %d\n", y, x);
}
