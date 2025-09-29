#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    float x;
    a=7;
    b=5;
    c=6;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=(-b+-sqrt(b*b-4*a*c))/2*a;
    printf("%f",x);
    return 0;
}
