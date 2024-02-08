#include<stdio.h>
void main()
{
    int i,max,min,n;
    int arr[100];
    printf("enter the size of the array =");
    scanf("%d",&n);
    printf("enter the elements in the array =");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];

    }
    printf("the max=%d",max);
     printf("\n the min=%d",min);

}
