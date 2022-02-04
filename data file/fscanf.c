#include<stdio.h>
/*

*/

FILE *f;

int main(){
    char name[20];
    int contact;

    f=fopen("document.txt","r");
    while(fscanf(f,"%s%d",&name,&contact)!=EOF){
        printf("\nName: %s",name);
        printf("\nContact: %d",contact);
    }
    fclose(f);
return 0;
}
