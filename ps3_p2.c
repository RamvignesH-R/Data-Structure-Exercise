#include<stdio.h>
void main()
{
    int n,i,target=0,low=0,mid,index=-1;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n],high=n-1;
    printf("Enter the sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the targeted number in the array:\n");
    scanf("%d",&target);

    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==target)
        {
            index=mid;
            break;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else if(arr[mid]>target)
        {
            high=mid-1;
        }
    }
    if(index!=-1)
        printf("the element %d is found at %d in the array",target,index+1);
    else
        printf("the element is not found");
}
