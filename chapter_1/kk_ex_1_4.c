#include <stdio.h>

/* print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300 */

int main() {
  printf("Celsius to Fahrenheit convertor\n");
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 120;
  step = 2; 

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius/(5.0/9.0)+32);
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
    
  }
  return 0;

}
