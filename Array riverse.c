#include <stdio.h>
int main()
{
    int l=0,i;
    char str[100];
    printf("enter the name: ");
    scanf("%s", &str);
    for(i=0;str[i]!=0;i=i+1)
    {
        l=l+1;
    }
    printf("The lenth is:%d/n");
    for(i=l-1;i>=0;i=i-1)
    {
        printf("%c",str[i]);
    }
    return 0;
}
