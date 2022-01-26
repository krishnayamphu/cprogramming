#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char ch;
    f=fopen("student.txt","a");
    printf("Type some text:");
    while((ch=getchar())!='\n'){
        putc(ch,f);
    }
    printf("\ntext added.");
    fclose(f);
getch();
return 0;
}
