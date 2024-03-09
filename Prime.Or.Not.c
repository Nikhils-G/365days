#include <stdio.h>
int main()
{
  int t1 = 0, t2 = 1;
  int nextTerm, n,i;
  printf("Enter a positive number: ");
  scanf("%d ",&n);
  printf("%d %d ",t1,t2);
 for(i=2;i<=n;i++)
  {

      nextTerm=t1+t2;
      printf("%d",nextTerm);
      t1=t2;
      t2=nextTerm;
  }
  return 0;

}
