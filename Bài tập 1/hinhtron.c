#include <stdio.h>

int main (void) {
  // khai bao bien DT, CVCV, và R 
  double DT, CV, R; 
  // khai bao ten pi kieu double
  const double PI= 3.14;
  // gan gia tri DT, CV, R
  DT = R * R * PI;
  CV = 2 * R * PI; 
  printf("VC hinh tron la: %0.1f\n", CV);
  printf("DT hinh tron la: %0.1f\n", DT);
  return 0;
}
