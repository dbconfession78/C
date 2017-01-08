/* Program that prints table of farenheight to celsius conversion using a function */
#include <stdio.h>
#define BOTTOM -50  /* bottom of table (i.e. thermometer)*/
#define TOP 300
#define INCREMENT 10


int far_to_cel(int far2) {
  int cel2 = (5.0/9.0) * (far2 - 32.0);
  return cel2; }

int main() {

  float far, cel;
  int bottom, top, increment;

  far = BOTTOM;
  printf("\n\n\n\n\n");
  printf("Farenheight and Cecius Conversion Table\n");
  printf("Farenheight - Celsius\n");
 
 while (far < TOP) {
   cel = far_to_cel(far);
    printf("%8.0f  |  %6.1f\n", far, cel);
  far += INCREMENT; }

return 0;

}
