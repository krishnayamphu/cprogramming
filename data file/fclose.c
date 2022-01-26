#include<stdio.h>
/*
fclose(file-pointer);
*/

FILE *f;

int main(){
    f=fopen("student.txt","w");
    printf("file created successfully.");
    fclose(f);
return 0;
}
