#include<stdio.h>
void main(){
    int n;
    printf("enter the order of the matrix\n");
    scanf("%d",&n);
    int arr[n][n],arr1[n][n],i,j;
    printf("enter the elements of the matrix 1 \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter the pocket [%d][%d] of matrix 1\t",i,j);

            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the elements of the matrix 2 \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter the pocket [%d][%d] of matrix2\t",i,j);

            scanf("%d",&arr1[i][j]);
            if(arr[i][j]!=arr1[i][j]){
                printf("the matrices are not equal\n");
                break;
            }
        }
    }
}