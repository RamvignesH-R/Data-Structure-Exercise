#include<stdio.h>
void main(){
    int n;
    printf("enter the no. of elements in an array\n");
    scanf("%d",&n);
    int i,j,arr[n],freq,comp=0,m=0;
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        printf("enter %d element\t",i+1);
        scanf("%d",&arr[i]);
        
    }
   
    for (i=0;i<n;i++)
    {
        freq=0;
        
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
                
            }

        }
            if(freq>comp)
            {
            
            comp=freq;
            m=arr[i];

            }
        
    }

    printf(" \nthe most frequently occured element is %d and it has occured %d times",m,comp);

}