#include<stdio.h>
FILE *f;
struct Person{
    char name[20];
    int age;
};
/*
fwrite(&structure_variable,sizeof(structure_variable),no_of_records,file_pointer);
*/
int main(){
    struct Person p={"Ram",20};
    f=fopen("person.txt","w");
    fwrite(&p,sizeof(p),1,f);
    printf("Person record added.");
    fclose(f);
return 0;
}
