#include <stdio.h>
FILE *f;
int main(){

f=fopen("demo.txt","r");

if(f==NULL){
    printf("File not found");
}else{
    printf("File is ready to read");
}
return 0;
}
