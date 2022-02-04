#include<stdio.h>
/*

*/

FILE *f;

int main(){
    char name[]="Aptech";
    int contact=1234567;

    f=fopen("document.txt","w");
    fprintf(f,"%s\t%d",name,contact);
    printf("file created successfully.");
    fclose(f);
return 0;
}
