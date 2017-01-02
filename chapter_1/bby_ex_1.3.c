#include <stdio.h>

int main() {
    
    float fahr, celsius;
    int start, stop, step;

    start = 0;
    stop = 300;
    step = 20;

    fahr = start;
    
    printf("Fahrenheit-Celsius Table\n\n");

    while(fahr <= stop){
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}
