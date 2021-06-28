#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    n=a&1;
    if(n==1)
    {
        printf("This number is odd\n");
    }
    else if(n==0)
    {
        printf("This number is even\n");
    }
    return 0;
}
