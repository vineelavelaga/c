#include <stdio.h>

const double INCHES_TO_CENTIMETERS = 2.54;

int main(int argc, char** argv) {
  double inches = 13.0;
  double cms = inches * INCHES_TO_CENTIMETERS;
  printf("%lf inches = %lf centimeters\n", inches, cms);
  return 0;
}
