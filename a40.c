#include<string.h>
int replace(char str1[],int n,char ch1,char ch2)
{
    for(int i=0;i<=n;i++)
    {
        if(str1[i]==ch1)
        {
            str1[i]=ch2;
        }
        else if(str1[i]==ch2)
        {
            str1[i]=ch1;
        }
    }
    printf("%s ",str1);
}
int main()
{
    char str1[]="aaappp";
    char ch1='a';
    char ch2='p';
    int n=strlen(str1);
    replace(str1,n,ch1,ch2);
    return 0;
}
