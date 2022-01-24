#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct{
    char name[20];
    int age;
}Person;

int main(){
Person p;
printf("Enter Name:");
scanf("%s",&p.name);

printf("Enter Age:");
scanf("%d",&p.age);

printf("\n\nName: %s",p.name);
printf("\nAge: %d",p.age);
getch();
return 0;
}
