#include <stdio.h>
#include <stdlib.h>
int n;
int diagonalDiffrence(int arr[100][100]){
    int sum1=0,sum2=0,diff=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1=sum1+arr[i][j];
            }
            if (i+j==n-1) {
            sum2=sum2+arr[i][j];
            }
        }
    }
    diff=abs(sum1-sum2);+
    printf("%d",diff);
    return 0;
    }

int main(){
    int a[100][100];
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Array: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
            }
        }
    diagonalDiffrence(a);
    return 0;
    
}