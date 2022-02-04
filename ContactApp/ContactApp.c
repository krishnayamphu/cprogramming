#include<stdio.h>
#include<conio.h>

FILE *f;
#include "menu.c"
#include "Contact.c"
#include "CreateContact.c"

int main(){
int choice;
menu();
scanf("%d",&choice);

switch(choice){
case 1:
    createContact();
    break;
case 2:
    break;
default:
    printf("Invalid choice, Please enter choice between 1-6.");
    break;
}



getch();
return 0;
}
