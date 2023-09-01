// The objective of these exercises is to write a code is as few lines as possible, not readability
// or looking for a real world implementation.




/* Ej 17 #define ELAPSED(h1, m1, h2, m2) ((h2>h1)*(h2-h1)*60+(h2<h1)*(h1-h2)*60+(h2>h1)*(m1-m2)+(h2<h1)*(m1-m2))
*/
/* Ej 16. #define DIVISOR(b, c) (!(b%c))
*/
/* Ej 11 ask
*/
/* Ej 7. int isDigit(char char1){
    if(char1>='0' && char1<='9'){
        return 1;
    }
    return 0;
}
*/
/* Ej 6.
#define MAXIMO2(num1, num2, num3) (num3 = (num1>num2 ? num1 : num2))
#import <stdio.h>
int main(){
    int max;
    printf("%d\n", MAXIMO2(4, 5, max));
}
*/
/* Ej 3. 4/5
#define VOLUME(radius) (radius*radius*radius*4*3.14159/3)
#import <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("%f\t", VOLUME(i));
    }
    return 0;
}
*/