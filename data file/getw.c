#include<stdio.h>
FILE *f;
int main(){
    int num;
    f=fopen("number.txt","r");
    num=getw(f);
    printf("number: %d",num);
    fclose(f);
return 0;
}
