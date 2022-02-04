#include <stdio.h>
FILE *f;

/*
int rename("oldfilename","newfilename");
*/
int main(){
rename("demo.txt","document.txt");
printf("file renamed success.");
return 0;
}
