#include<stdio.h>  
 int main()    
{    
int n=153,r,sum=0,temp;    
# 1*1*1=1
# 5*5*5=125
# 3*3*3=27
#1+125+27=153
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   