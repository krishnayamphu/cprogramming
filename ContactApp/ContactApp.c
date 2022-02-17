#include<stdio.h>
#include<conio.h>

FILE *f, *fp;
#include "menu.c"
#include "Contact.c"
#include "CreateContact.c"
#include "DisplayContact.c"
#include "UpdateContact.c"

int main(){
int choice;
menu();
scanf("%d",&choice);

switch(choice){
case 1:
    createContact();
    break;
case 2:
    displayContact();
    break;
case 3:
    updateContact();
    break;
default:
    printf("Invalid choice, Please enter choice between 1-6.");
    break;
}



getch();
return 0;
}
