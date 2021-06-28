#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n ^ m){
        puts("Numers are not equal\n");
    }
    else{
        puts("Numers are equal\n");
    }
    return 0;
}
