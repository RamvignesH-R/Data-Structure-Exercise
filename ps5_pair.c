#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the integer\n");
    scanf("%d",&n);
    int arr[n],i,j;
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
           if(arr[i]+arr[j]==0){
            printf("the pair(%d,%d) is summed to 0\n",arr[i],arr[j]);
           }
        }
    }
}