#include <stdio.h>
/*
#if expression
//statement
#endif
*/
#define TEMP 2
int main(){
#if TEMP<10
    printf("It is too much cold.");
#endif
return 0;
}
