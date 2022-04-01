#include<stdio.h>
#include<unity.h>
#include"game.h"
void function()
{
    int cal,a,b, i;
    printf("\nselect:\n*case 1: add \n*case 2: sub\n*case 3: mul\n*case 4: div\n*case 5: rem\n\n");
    scanf("%d", &cal);
    switch (cal)
    {
        case 1:
            printf("enter two numbers\n");
            scanf("%d\t%d", &a, &b);
            TEST_ASSERT_EQUAL(10,add(a,b));
            break;
        case 2:
            printf("enter two numbers\n");
            scanf("%d\t%d", &a, &b);
            TEST_ASSERT_EQUAL(0,sub(a,b));
            break;
        case 3:
            printf("enter two numbers\n");
            scanf("%d\t%d", &a, &b);
            TEST_ASSERT_EQUAL(0,mul(a,b));
            break;
        case 4:
            printf("enter two numbers\n");
            scanf("%d\t%d", &a, &b);
            TEST_ASSERT_EQUAL(0,div(a,b));
            break;
        case 5:
            printf("enter two numbers\n");
            scanf("%d\t%d", &a, &b);
            TEST_ASSERT_EQUAL(0,rem(a,b));
            break;
    }
}

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