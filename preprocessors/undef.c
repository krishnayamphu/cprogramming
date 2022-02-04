#include <stdio.h>
//#undef TOKEN
#define PI 3.14
#undef PI
int main(){
printf("Value of PI: %f",PI);
return 0;
}
