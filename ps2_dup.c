#include<stdio.h>
void main(){
    int n;
    printf("Enter the no of element\n");
    scanf("%d",&n);

    int arr1[n],i,j;
    printf("enter the elements in array\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
    }
    printf("the entered elements are as follows\n");
    for(i=0;i<n;i++){
    printf("%d\t",arr1[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr1[i]==arr1[j]){
                for(int k=j;k<n;k++){
                    arr1[k]=arr1[k+1];

                }
                n--;
                j--;

            }
            
        }
    }
    printf("\nthe removed deuplicate array\n");
    for(i=0;i<n;i++){
    printf("%d\t",arr1[i]);
    }

}