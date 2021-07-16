#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temp table */
  upper = 300;      /* upper limit */
  step = 20;        /* step size */

  celsius = lower;

  printf("Celsius Fahrenheit\n"); /* print the heading */

  while (celsius <= upper) {
    fahr = (9.0/5.0) * (celsius + 32.0);
    printf("%7.0f \%10.0f\n", celsius, fahr); /*prints in space of 7 and 10 digits */
    celsius = celsius + step;
  }
}
