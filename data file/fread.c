#include<stdio.h>
FILE *f;
struct Person{
    char name[20];
    int age;
};
/*
fread(&structure_variable,sizeof(structure_variable),no_of_records,file_pointer);
*/
int main(){
    struct Person p;
    f=fopen("person.txt","r");
    while(fread(&p,sizeof(p),1,f)){
        printf("Person Name: %s",p.name);
        printf("\nPerson Age: %d\n",p.age);
    }
    fclose(f);
return 0;
}
