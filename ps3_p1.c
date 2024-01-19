#include<studio.h>
void main()
{
    int n,i,count=0,max=0,rating;
    printf("Enter the last workings days:\n");
    scanf("%d",&n);
    int workload[n];
    printf("Enter the workload for each day:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &workload[i]);
    }
    for(i=1;i<=n;i++)
    {   
        
        if(workload[i]>6)
        {
           count++;
        }
        else
        {
            if(max<count)
            {
                max=count;
            }
            count=0;
        }
    }
    if(max<count)
        {
            max=count;
        }
    printf("the worker worked for the maximum of the %d days",max);
    rating=(max*5)/n;
    printf("the rating of the worker is %d",rating);
}