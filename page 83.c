#include<stdio.h>

int sum;
//int count;
void addSum(int count)
{
    if(count>5){
        return;
    }

    int a;
    scanf("%d",&a);
    sum=sum+a;
    //count++;
    addSum(count+1);
}


int main()
{
    int n;
    //printf("How many numbers?");
    //scanf("%d",&n);
    addSum(1);
    printf("Total sum=%d",sum);
    return 0;
}
