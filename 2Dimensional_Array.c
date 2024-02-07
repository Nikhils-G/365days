#include<stdio.h>
void main()
{
    int a[10][10],n,m;
    int i,j;
    printf("enter the size of array=\n");
    scanf("%d",&n);
    printf("enter the size of array=\n");
    scanf("%d",&m);
    printf("enter the elements into the array=");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("array=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    getch();
}
