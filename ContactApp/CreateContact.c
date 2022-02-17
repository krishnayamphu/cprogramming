void createContact(){
char next='y';
Contact contact;
f=fopen("data\\contact.txt","w");
    while(next=='Y'||next=='y'){
        printf("\n Contact name:");
        scanf("%s",&contact.name);
        printf("\n Contact number:");
        scanf("%s",&contact.number);
        printf("\n Contact email:");
        scanf("%s",&contact.email);

        fwrite(&contact,sizeof(contact),1,f);
        printf("Contact created succefully.\n\n");
        printf("Add another contact (Y/N)?:");
        next=getche();
    }
fclose(f);
}
