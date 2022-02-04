#include<stdio.h>
FILE *f;
int main(){
    char name[20];
    printf("Enter your name:");
    gets(name);

    printf("Your name is: %s",name);
    fclose(f);
return 0;
}
