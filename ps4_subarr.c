#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    int arr[n],i,j,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
        
            if(sum==0){
                for(int k=i;k<=j;k++){
                    printf("%d\t",arr[k]);
                }
            }
            printf("\n");
        }
        
    }
    
}