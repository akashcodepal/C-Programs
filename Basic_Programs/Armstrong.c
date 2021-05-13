#include<stdio.h>
#include<math.h>

void main(){
    int n,n1,n2,digit=0,armstrong=0,remainder;
    printf("Enter number: ");
    scanf("%d",&n);
    n1=n;
    n2=n;    
    while(n1!=0){
        digit++;
        n1=n1/10;  
    }
    while(n2!=0){
        remainder=n2%10;
        armstrong+= pow(remainder,digit);
        n2=n2/10;
    }
    if(n==armstrong){
        printf("%d is Armstrong", n);
    }else
    {
        printf("%d is not Armstrong",n);
    }
    
}