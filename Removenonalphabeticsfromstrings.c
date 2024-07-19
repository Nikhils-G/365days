#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    printf("enter the string :");
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        while (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for(int j=i;j<n;j++)
            {
                str[j]=str[j+1];
            }
            n--;
            str[n]='\0';
        }
        
    }

    printf("%s\n", str);
}
