#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char ch;
    f=fopen("student.txt","w");
    while((ch=getchar())!='\n'){
        putc(ch,f);
    }
    fclose(f);
getch();
return 0;
}
