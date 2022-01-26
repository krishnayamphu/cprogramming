#include<stdio.h>
#include<conio.h>
/*
getc() =>read a character from file.
#EOF=End of File
*/
FILE *f;
int main(){
    char ch;
    f=fopen("student.txt","r");

    while((ch=getc(f))!=EOF){
        printf("%c",ch);
    }
    fclose(f);
getch();
return 0;
}
