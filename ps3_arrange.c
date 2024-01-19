#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],i,j,temp;
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(arr[j]>arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    printf("rearranged array\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}