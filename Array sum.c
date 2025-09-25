#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d element:\n ",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    printf("Array element: ");
    for (i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n sum = %d\n",sum);

    return 0;
}
