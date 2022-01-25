#include<stdio.h>
#include<conio.h>
#include<string.h>

union Employee{
char name[20]; //20
int age; //4

};

int main(){
union Employee e;
e.age=40;
//strcpy(e.name,"Ram");

printf("Age: %d",e.age);
//printf("\nname: %s",e.name);

getch();
return 0;
}

