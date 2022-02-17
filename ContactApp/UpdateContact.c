void updateContact(){
Contact contact;
char name[50];
f=fopen("data\\contact.txt","r");
fp=fopen("data\\temp.txt","w");
if(f==NULL){
    printf("\a\a\aError: File not found!");
}else{
    printf("Search Contact Name:");
    scanf("%s",&name);

    while(fread(&contact,sizeof(contact),1,f)){
        if(strcmpi(contact.name,name)==0){
            printf("\nExisting data found:\n");
            printf("\nContact name: %s",contact.name);
            printf("\nContact number: %s",contact.number);
            printf("\nContact Email: %s",contact.email);

            printf("\n==========Update Record:==========\n");
            printf("Name:");
            scanf("%s",&contact.name);
            printf("Number:");
            scanf("%s",&contact.number);
            printf("Email:");
            scanf("%s",&contact.email);
            fwrite(&contact,sizeof(contact),1,fp);

        }else{
            fwrite(&contact,sizeof(contact),1,fp);
            printf("No records found.");
        }
    }
}
fclose(f);
fclose(fp);
remove("data\\contact.txt");
rename("data\\temp.txt","data\\contact.txt");
printf("Data updated.");
}
