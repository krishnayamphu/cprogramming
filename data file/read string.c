#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char text[20];

    f=fopen("data.txt","r");
    printf("%s",fgets(text,20,f));
    fclose(f);
getch();
return 0;
}
