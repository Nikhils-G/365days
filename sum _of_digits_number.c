#include<stdio.h>
int main()
{
  int n,sum=0;
  n=2828282828;
  while(n != 0)
   {
     sum += n % 10;
     n = n/ 10;
   }
 printf("%d" , sum); 
 return 0;
}

