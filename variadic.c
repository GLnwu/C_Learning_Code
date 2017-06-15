/*************************************************************************
    > File Name: test.c
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 15 Jun 2017 01:14:55 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define PR(X,...) printf("Message " #X ": " __VA_ARGS__)
int main(void) {
  double x = 48;
  double y;

  y = sqrt(x);
  PR(1, "x = %g\n", x);
  PR(2, "x = %.2f, y = %.4f\n", x, y);
  return 0;
}
