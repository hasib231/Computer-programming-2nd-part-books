#include<stdio.h>
int main()
{
    int n=2;
    int i,count=0,num;
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num&(1<<i)){
                count++;
        printf("%d\n",num);
        }
    }
    printf("Number of 1: %d\n",count);
    return 0;
}
