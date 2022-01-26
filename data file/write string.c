#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char text[]="hello";

    f=fopen("data.txt","w");
    fputs(text,f);
    printf("text added.");
    fclose(f);
getch();
return 0;
}
