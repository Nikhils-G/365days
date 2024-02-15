#include<stdio.h>
void traversal(int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }
}
void reverse(int a[],int n)
{
    int left,right,temp;
    left=0;
    right=n-1;
    for(int i=left;i<right;i++)
    {
        temp=a[i];
        a[i]=a[right];
        a[right]=temp;
        right--;
    }

}

int main()
{
    int a[]={1,2,3,4,5,6};

    int n=sizeof(a)/sizeof(int);
    printf("the array=");
    traversal(a,n);
    printf("\n THE REVERSED ARRAY=");
    reverse(a,n);
    traversal(a,n);
    return 0;
}
