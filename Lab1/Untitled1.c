#include <stdio.h>

int main() {
    int in,a,b,c,d;
    printf("Input");
    in=1234;
    b= in / 1000 ;
    c=(in / 100) % 10;
    d=(in / 10) % 10;
    a=in % 10;
    printf("b %d c %d d %d a %d",b,c,d,a);
    return 0;
}
