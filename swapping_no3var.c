#include<stdio.h>
int main()
{
    int a,b;
    printf ("enter two numbers");
    scanf ("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf ("A=%d, B=%d", a,b);
    return 0;
}