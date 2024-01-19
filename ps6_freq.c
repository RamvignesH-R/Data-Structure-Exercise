#include<stdio.h>
void main(){
    int n,i,j,count,freq,m=0;
    printf("enter the no . of elements\n");
    scanf("%d",&n);
    count=n;
    int arr[n],temp[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    printf("the entered array elements are\n");
     for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
       
     }
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(temp[i]==temp[j]){
                for(int k=j;k<n;k++){
                    temp[k]=temp[k+1];
                }
                n--;
                j--;
            }
        }
     }
     for(i=0;i<count;i++){
        freq=0;
        for(j=i;j<count;j++){
            if(temp[m]==arr[j]){
                freq++;

            }
        }
        if(m!=n){
        printf("\nthe frequency of the element %d is %d\n",temp[m],freq);
        m++;
        }
     }

}