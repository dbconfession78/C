#include <stdio.h>

int main() {

    int c, pre;

    pre = EOF;

    while( ( c = getchar() ) != EOF) {
        if(c == ' ') {
            if(pre != ' ') {
            
                putchar(c);

            }
        } else {
            putchar(c);
        }
        
        pre = c;
    }

}
