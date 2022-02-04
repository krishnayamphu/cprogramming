#include <stdio.h>
/*
#ifdef MACRO
//statement
#endif
*/
#define PI 3.14
int main(){
#ifdef PI
    printf("Value of PI: %f",PI);
#endif
return 0;
}
