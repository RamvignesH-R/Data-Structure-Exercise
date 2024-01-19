#include <stdio.h>
void main(){
    int arr[300],n,i,sum,sum1=0,m=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("%d\n",sum);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        m++;
        if(m==arr[i]){
        sum1+=arr[i];
        }
        
    }
    printf("the missing number is %d",sum-sum1);

}