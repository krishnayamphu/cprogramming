#include<stdio.h>
/*
(.txt,.dat)
FILE *f;
fopen("source_path","write_mode");
write mode:
w,w+,r,r+,a,a+
*/

FILE *fp;

int main(){
    fp=fopen("doc.txt","w");
    printf("file created successfully.");
return 0;
}
