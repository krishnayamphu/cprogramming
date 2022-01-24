#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
typedef struct{
    datatype member1;
    datatype member2;
}StructureName;
*/
typedef struct{
    char name[20];
    int age;
}Person;

int main(){
Person p={"ramesh",41};

printf("Name: %s",p.name);
printf("\nAge: %d",p.age);
getch();
return 0;
}
