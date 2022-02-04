#include <stdio.h>
/*
#if expression
//statement
#else
//statement
#endif
*/
#define AGE 2
int main(){
#if AGE>=18
    printf("You can vote !");
#else
    printf("You can not vote.");
#endif
return 0;
}
