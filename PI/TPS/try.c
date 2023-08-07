#include <stdio.h>

int main(){
    enum week {Monday = 0, Tuesday, Wednesday};
    typedef enum week typeWeek;
    typeWeek day;
    day = Tuesday;
    printf("%d\n", 10/0);
    return 0;
}