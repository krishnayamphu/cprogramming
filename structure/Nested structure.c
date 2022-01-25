#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
struct StructureParent{
    datatype member;
    struct StructureChild var;
};

structureParentVar.structureChildVar.member;
*/

struct DOB{
int day;
int month;
int year;
};

struct Employee{
char name[20];
char address[50];
struct DOB dob;
};

struct Student{
char name[20];
int grade;
struct DOB dob;
};

int main(){
struct Employee e;
struct Student s;

strcpy(e.name,"Ram");
strcpy(e.address,"Kumaripati, Lalitpur");
e.dob.day=10;
e.dob.month=6;
e.dob.year=1990;

strcpy(s.name,"Hari");
s.grade=12;
s.dob.day=20;
s.dob.month=12;
s.dob.year=2000;

printf("\n\nEmployee Name: %s",e.name);
printf("\nEmployee Address: %s",e.address);
printf("\nEmployee Date of Birth (yyyy-mm-dd): %d-%d-%d",e.dob.year,e.dob.month,e.dob.day);

printf("\n\nStudent Name: %s",s.name);
printf("\nStudent Grade: %d",s.grade);
printf("\nStudent Date of Birth (yyyy-mm-dd): %d-%d-%d",s.dob.year,s.dob.month,s.dob.day);
getch();
return 0;
}

