#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string=");
    scanf("%s",str);
    int len,temp;
    len=strlen(str);

    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=str[i];
        i++;

    }
    printf("%s",str);
}
