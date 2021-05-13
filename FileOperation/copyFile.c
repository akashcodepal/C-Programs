#include <stdio.h>

int main() {
    FILE *fptr;

    //create file to be copied(for practice) otherwise just open it..
    char str[50]="this is c-programming lab..topic-FIle handling";
    fptr=fopen("./files/CopyFrom.txt","w");
    if(fptr==NULL)
    printf("File not created\n");
    else{
        printf("file created\n");
        fputs(str,fptr);
        fclose(fptr);
    }
    
    //for copying
    char str1[50];
    FILE *fp;
    fptr=fopen("./files/CopyFrom.txt","r");
    fp=fopen("./files/CopyTo.txt","w");
    if(fptr==NULL)
    printf("File not opened\n");
    else{
        printf("File opened\n");
        fgets(str1,sizeof(str1),fptr);
        fputs(str1,fp);
        fclose(fptr);
        fclose(fp);
    }
    
    //Read/displaying from CopyTo
    char str3[50];
    fp=fopen("./files/CopyTo.txt","r");
    if(fp==NULL)
    printf("File not opened\n");
    else{
        printf("File opened\n");
        fgets(str3,sizeof(str3),fp);
        puts(str3);
        fclose(fp);
    }
    
    return 0;
}