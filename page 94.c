#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>0 && (x & x-1)==0)
    {
        printf("%d is power of 2\n",x);
    }
    else{
        printf("%d is not power of 2\n",x);
    }
}




