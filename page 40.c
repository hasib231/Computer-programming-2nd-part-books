#include<stdio.h>
int main()
{
    char c='A';
    char *p,**q,***r;
    p=&c;
    q=&p;
    r=&q;

    printf("Value of c : %c\n",c);
    printf("Value of c : %p\n",&c);

    printf("Value of c : %c\n",*p);
    printf("Value of c : %p\n",&p);

    printf("Value of c : %c\n",**q);
    printf("Value of c : %p\n",&q);

    printf("Value of c : %c\n",***r);
    printf("Value of c : %p\n",&r);
    return 0;
}
