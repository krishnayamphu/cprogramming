void displayContact(){
Contact contact;
f=fopen("data\\contact.txt","r");
if(f==NULL){
    printf("\a\a\aError: File not found!");
}else{
    while(fread(&contact,sizeof(contact),1,f)){
        printf("\nContact name: %s",contact.name);
        printf("\nContact number: %s",contact.number);
        printf("\nContact Email: %s",contact.email);

    }
}
fclose(f);
}
