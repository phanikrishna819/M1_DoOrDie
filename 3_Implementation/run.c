#include<stdio.h>

#include"game.h"
extern void function();
int add(int a,int b)
{
    int sum;
    sum= a+b;
    if(10==sum)
    {
        printf("U WON\n");
    }
    else
    {
        printf("LOST\n");
    }
    return sum;
}

int sub(int a,int b)
{
    int sub;
    sub= a-b;
    if(10==sub)
    {
        printf("U WON\n");
    }
    else
    {
        printf("LOST\n");
    }
    return sub;
}
int mul(int a, int b)
{
    int mul;
    mul= a*b;
    if(10==mul)
    {
        printf("U WON\n");
    }
    else
    {
        printf("LOST\n");
    }
    return mul;
}
int div(int a, int b)
{
    int div;
    div= a/b;
    if(10==div)
    {
        printf("U WON\n");
    }
    else
    {
        printf("LOST\n");
    }
    return div;
}
int rem(int a, int b)
{
    int rem;
    rem= a%b;
    if(10==rem)
    {
        printf("U WON\n");
    }
    else
    {
        printf("LOST\n");
    }
    return rem;
}