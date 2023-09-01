#include <stdio.h>
#include <math.h>
#define A_MAYUSC(a) a -= 'a' - 'A'



int main(){
    int a = 'F';
    A_MAYUSC(a);
    printf("%c\n", a);
    return 0;
}