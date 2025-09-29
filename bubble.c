#include <stdio.h>
int main()
{
    int a[20],i,n,j,temp;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i=i+1)
    {
        printf("enter the elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<n-1;j=j+1)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i=i+1)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
