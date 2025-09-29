#include <stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a Character: ");
    scanf("%s",&str);
    for(i=0; str[i] !='\0'; i++)
    {
        if(i%2 !=0)
        {
            printf("%c",str[i]);
        }
        else
        {
             printf("%c",str[i]-32);
        }
    }
    return 0;
}
