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
<<<<<<< HEAD:3_Implementation/Src1/test/test_addint.c
    printf("\t****GUESS ME****\n\n*RULES: SELECT A CASE AND ENTER TWO NUMBERS IF U WON COLLECT THE PRIZE!!\n\n \t**YOU GOT ONLY ONE CHANCE**\n\n");
=======
    printf("\t****GuessMe****\n\n*RULES: SELECT A CASE AND ENTER TWO NUMBERS IF U WON COLLECT THE PRIZE!!\n\n \t**YOU GOT ONLY ONE CHANCE**\n\n");
>>>>>>> 53cbc779dceb1f515a62ee5d26428d9d1d4b0c60:3_Implementation/test_addint.c
    UnityBegin(NULL);
    RUN_TEST(function);
    /*TEST_ASSERT_EQUAL(0,add(0,0));
    TEST_ASSERT_EQUAL(10,add(15,10));*/
    return(UnityEnd());
}
