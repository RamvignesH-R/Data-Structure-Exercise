#include<stdio.h>
void main(){
    int n,i;
    printf("enter the no. of elements in array\n");
    scanf("%d",&n);
    int arr[n],eve[n],odd[n],ec=0,oc=0;
    printf("enter the element in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            eve[ec]=arr[i];
            ec++;
        }
        else{
            odd[oc]=arr[i];
            oc++;    
        }

    }
    printf("even array\n");
    for(i=0;i<ec;i++){
        printf("\n%d\t",eve[i]);

    }
    printf("\nodd array\n");
    for(i=0;i<oc;i++){
        printf("\n%d\t",odd[i]);
    }

}