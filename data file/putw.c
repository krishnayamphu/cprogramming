#include<stdio.h>
FILE *f;
int main(){
    int num=10;
    f=fopen("number.txt","w");
    putw(num,f);
    printf("data write successfully.");
    fclose(f);
return 0;
}
