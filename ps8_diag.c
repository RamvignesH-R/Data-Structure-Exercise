#include<stdio.h>
void main(){
    int n;
    printf("enter the order of matrix\n");
    scanf("%d",&n);
    int arr[n][n],sum=0,sum1=0,i,j;
    printf("enter the elements of the matrix\n");
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("enter the pocket[%d][%d]:\t",i,j);
                scanf("%d",&arr[i][j]);
                if(i==j){
                    sum+=arr[i][j];
                }
                if(i+j==n-1){
                    sum1+=arr[i][j];
                }
            }
    }
    printf(" sum of diagonal elements are %d\t%d",sum,sum1);
}