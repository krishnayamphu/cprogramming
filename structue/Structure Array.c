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

*/
int i;
struct Person p[5];

p[0].age=10;
p[1].age=11;
p[2].age=12;
p[3].age=13;
p[4].age=14;

strcpy(p[0].name,"Mohan");
strcpy(p[1].name,"Hari");
strcpy(p[2].name,"Uttam");
strcpy(p[3].name,"Bijaya");
strcpy(p[4].name,"Shyam");


for(i=0;i<5; i++){
printf("\nPerson Name: %s",p[i].name);
printf("\nPerson Age: %d\n",p[i].age);
}
getch();
return 0;
}

