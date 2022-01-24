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
Creating a structure variable
struct StructureName var;
*/
struct Person p;
struct Person p1;

/*
Accessing Structure Data Member by Structure variable:
structureVariable.member=value;
structureVariable.member;
*/
p.age=40;
strcpy(p.name,"Ram");

p1.age=25;
strcpy(p1.name,"Sita");


printf("Person name: %s",p.name);
printf("\nPerson Age: %d",p.age);

printf("\n\nPerson name: %s",p1.name);
printf("\nPerson Age: %d",p1.age);



getch();
return 0;
}
