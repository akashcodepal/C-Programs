#include<stdio.h>
int n;

int aVeryBigSum(int ar[n]){
    long sum=0;
    for (int i=0; i<n; i++) {
    sum=sum+ar[i];
    }
    return sum;
}
int main(){
    
    int a[10];
    scanf("%d",&n);
    for(int j=0;j<n;j++){
    scanf("%d",&a[j]);
    }
    long Sum=aVeryBigSum(a);
    printf("%ld",Sum);
    return 0;
}