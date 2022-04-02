#include<stdio.h>
#include"unity.h"
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

