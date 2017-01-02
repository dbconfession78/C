#include <stdio.h>

int main() {
    int fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        int cel;
        cel = (5.0/9.0) * (fahr -32);
        printf("%3d %6.1d\n", fahr, cel);
    }

}
