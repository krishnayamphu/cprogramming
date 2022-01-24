#include<stdio.h>
#include<conio.h>
#include<string.h>

//Define a structure
struct Person{
    char name[20]; //data member
    int age; //data member
};
int main(){
/*
Initialization  Structure variable's value:

struct StructureName structureVariable={value1,value2,...};
*/

struct Person p={"Ramesh",30};

printf("Person Name: %s",p.name);
printf("\nPerson Age: %d",p.age);

getch();
return 0;
}

