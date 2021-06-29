#include<stdio.h>

struct s1{
    int n;
    double d;
    char c;
    };

struct s2{
    char c;
    int n;
    double d;
    };

int main()
{
    printf("char size : %d bytes\n",sizeof(char));
    printf("int size : %d bytes\n",sizeof(int));
    printf("double size : %d bytes\n",sizeof(double));

    printf("s1 size : %d bytes\n",sizeof(struct s1));
    printf("s2 size : %d bytes\n",sizeof(struct s2));

}
