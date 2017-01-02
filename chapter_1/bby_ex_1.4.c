#include <stdio.h>

/* print Celsius-Fahrenheit table */

int main() {

    float cel, fahr;
    int start, stop, step;

    start = 0;
    stop = 300;
    step = 20;

    cel = start;

    while(cel <= stop){
        fahr = cel * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", cel, fahr);
        cel = cel + step;
    }

}
