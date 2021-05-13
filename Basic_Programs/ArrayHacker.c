#include <stdio.h>

int compareTriplets(int al[3],int bo[3]){
    int result[2]={0,0};
    for(int j=0;j<3;j++){
        if(al[j]>bo[j]){
            result[0]=result[0]+1;
        }
        if(al[j]<bo[j]){
            result[1]=result[1]+1;
        }    
    }
    printf("%d\t%d",result[0],result[1]);
    return 0;
}

int main(){
    int a[3],b[3],i;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    compareTriplets(a,b);
}