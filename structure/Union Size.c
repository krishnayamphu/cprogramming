#include<stdio.h>
#include<conio.h>
#include<string.h>

union Employee{
char name[2]; //2
int age; //4

};

int main(){
union Employee e;
e.age=40;

printf("Size of Union: %d",sizeof(e));
getch();
return 0;
}

