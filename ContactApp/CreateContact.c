void createContact(){
Contact contact;
char next='Y';
f=fopen("data\\contact.txt","a+");
while(next=='Y'||next=='y'){
    printf("\nContact name:");
    scanf("%s",&contact.name);
    printf("Contact email:");
    scanf("%s",&contact.email);
    printf("Contact number:");
    scanf("%s",&contact.number);
    fwrite(&contact,sizeof(contact),1,f);
    printf("Contact created succefully.\n\n");
    printf("Add another contact (Y/N)?:");
    next=getche();
}
fclose(f);

}
