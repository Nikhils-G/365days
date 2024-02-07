#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        printf("the roots are real\n");
        printf("root 1=%f",r1);
root 2=%f",r2);
    }
    else if (d==0)
    {
        r1=-b/2*a;
        r2=-b/2*a;
        printf("the roots are equal");
        printf("root1=%f",r1);
        printf("root1=%f",r1);
    }
    else if(d<0)
    {
        printf("the roots are imaginary");
    }
}
