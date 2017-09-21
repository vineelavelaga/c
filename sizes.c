#include <stdio.h>

#define PRINT_SIZE(type) printf("sizeof(" #type ") = %ld\n" , sizeof(type));

int main(int argc, char** argv) {
  PRINT_SIZE(char);
  PRINT_SIZE(unsigned char);
  PRINT_SIZE(short int);
  PRINT_SIZE(unsigned short int);
  PRINT_SIZE(int);
  PRINT_SIZE(unsigned int);
  PRINT_SIZE(long int);
  PRINT_SIZE(unsigned long int);
  PRINT_SIZE(float);
  PRINT_SIZE(double);
  return 0;
}
