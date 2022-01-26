#include<stdio.h>
/*
putc() =>write a character to file.
*/
FILE *f;
int main(){
    f=fopen("student.txt","w");
    putc('a',f);
    printf("data write successfully.");
    fclose(f);
return 0;
}
