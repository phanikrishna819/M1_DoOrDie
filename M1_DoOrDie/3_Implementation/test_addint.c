#include "unity.h"
#include<stdio.h>
#include"game.h"

void setUp(void)
{
}

void tearDown(void)
{
}


int main(void)
{
    printf("\t****DO\tOR  DIE****\n\n*RULES: SELECT A CASE AND ENTER TWO NUMBERS IF U WON COLLECT THE PRIZE!!\n\n \t**YOU GOT ONLY ONE CHANCE**\n\n");
    UnityBegin(NULL);
    RUN_TEST(function);
    /*TEST_ASSERT_EQUAL(0,add(0,0));
    TEST_ASSERT_EQUAL(10,add(15,10));*/
    return(UnityEnd());
}