#include "unity.h"

extern void manual_test_multiplyNum();

void setUp(void)
{

}

void tearDown(void)
{

}


void automated_test_multiplyNum()
{
    TEST_ASSERT_EQUAL(0, multiplyNum(0,0));
    TEST_ASSERT_EQUAL(12, multiplyNum(6,2));
    TEST_ASSERT_EQUAL(-15, multiplyNum(3,-5));
    TEST_ASSERT_EQUAL(10, multiplyNum(-4,-5));
}

void automated_test_multiplyNum_overflow()
{
    TEST_ASSERT_EQUAL(0, multiplyNum(INT_MAX,INT_MAX));
    
}

void automated_test_multiplyNum_underflow()
{
    TEST_ASSERT_EQUAL(0, multiplyNum(INT_MIN,INT_MIN));
}

int main(void)
{
    manual_test_multiplyNum();
    
    UnityBegin(NULL);

    RUN_TEST( test_multiplyNum );

    return (UnityEnd());
}