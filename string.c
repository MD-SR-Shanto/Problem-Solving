#include <stdio.h>
int main ()
{
    char str1[1000],str2[1000];
    int i,count=0;

    printf("enter the value of string:");
    fgets(str1, sizeof(str1), stdin);
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
        count++;
    }
    str2[i]='\0';
    printf("original string=%s\n",str1);
    printf("copied string=%s\n",str2);
    printf("the number of character copied:%d\n",count);
    return 0;
}
