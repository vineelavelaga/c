#include <stdio.h>

int main(int argc, char** argv){
  unsigned char a = 128;
  char b = a;
  printf("a = %d , b = %d\n", a, b);
  a = 127;
  b = a;
  printf("a = %d , b = %d\n", a, b);
  a = 126;
  b = a;
  printf("a = %d , b = %d\n", a, b);
  a = 129;
  b = a;
  printf("a = %d , b = %d\n", a, b);
  a = 255;
  b = a;
  printf("a = %d , b = %d\n", a, b);
  return 0;
}
