#include <stdio.h>
int main()
{
    int n,r=0,fact,sum=0,c;
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        while(r!=0)
        {
            fact=fact*r;
            r=r-1;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==c)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }
    return 0;
}
