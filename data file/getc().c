#include<stdio.h>
#include<conio.h>
/*
getc() =>read a character from file.
*/
FILE *f;
int main(){
    f=fopen("student.txt","r");
    char ch=getc(f);
    printf("%c",ch);
    fclose(f);
getch();
return 0;
}
