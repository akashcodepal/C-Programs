#include <stdio.h>

int main() {
    FILE *fptr;
    char str[50];
    printf("Enter String to count words and characters: ");
    gets(str);
    fptr=fopen("./files/CountWord&Char.txt","w");
    if(fptr==NULL)
    printf("File not created\n");
    else{
        printf("file created\n");
        fputs(str,fptr);
        fclose(fptr);
    }
    
    //for reading
    int ch;
    int count_words=0,count_char=0;
    fptr=fopen("./files/CountWord&Char.txt","r");
    if(fptr==NULL)
    printf("File not opened\n");
    else{
        printf("File opened\n");
        while((ch=fgetc(fptr))!=EOF){
            count_char++;
            if(ch==' '){
                count_words++;
            }
        } 
        count_words++;
        //words are always 1 more than the number of spaces
        printf("Number of words:%d \nNumber of Characters: %d\n",count_words,count_char);        
    }
    
    return 0;
}    