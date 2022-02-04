#include <stdio.h>
/*
#ifndef MACRO
//statement
#endif
*/
#define PI 3.14
int main(){
#ifdef PI
float n=PI;
    printf("Value of PI: %f",n);
#endif
return 0;
}
