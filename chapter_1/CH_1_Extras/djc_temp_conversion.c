/* Program that prints table of farenheight to celsius conversion */
#include <stdio.h>
#define BOTTOM -50  /* bottom of table (i.e. thermometer)*/
#define TOP 300
#define INCREMENT 10


int main() {

  float far, cel;
  int bottom, top, increment;

  far = BOTTOM;
  printf("Farenheight and Cecius Conversion Table\n");
  printf("Farenheight - Celsius\n");
 
 while (far < TOP) {
    cel = (5.0/9.0) * (far - 32.0);
    printf("%8.0f  |  %6.1f\n", far, cel);
  far += INCREMENT; }

return 0;

}
