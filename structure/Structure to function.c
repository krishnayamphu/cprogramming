#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Person{
    char name[20];
    int age;
};

void getPersonInfo(struct Person person);
int main(){
struct Person p={"ramesh",41};
getPersonInfo(p);
getch();
return 0;
}

void getPersonInfo(struct Person person){
        printf("Person's Name: %s",person.name);
        printf("\nPerson's Age: %d\n",person.age);
}

