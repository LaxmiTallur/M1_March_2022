#include "unity.h"
#include "multiplyNum.h"

void setUp(void)
{

}

void tearDown(void)
{

}


void automated_test_multiplyNum()
{
     int expected_product=0;
     int result_product=0;

    TEST_ASSERT_EQUAL(SUCCESS, multiplyNum(0, 0, &result_product));
    //TEST_ASSERT_EQUAL(expected_product, result_product);

    TEST_ASSERT_EQUAL(SUCCESS, multiplyNum(6, 2, &result_product));
    //TEST_ASSERT_EQUAL(12, result_product);

    TEST_ASSERT_EQUAL(SUCCESS, multiplyNum(3, -5, &result_product));
    //TEST_ASSERT_EQUAL(-15, result_product);

    TEST_ASSERT_EQUAL(SUCCESS, multiplyNum(-4, -5, &result_product));
    //TEST_ASSERT_EQUAL(20, result_product);

    
}


void automated_test_multiplyNum_overflow()
{
    int expected_product=0;
    int result_product=0;
    TEST_ASSERT_EQUAL(OVERFLOW, multiplyNum(INT_MAX, INT_MAX, &result_product));
}


void automated_test_multiplyNum_underflow()
{
    int expected_product=0;
    int result_product=0;
    TEST_ASSERT_EQUAL(UNDERFLOW, multiplyNum(INT_MIN, INT_MIN, &result_product));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_test_multiplyNum);
    RUN_TEST(automated_test_multiplyNum_overflow);
    RUN_TEST(automated_test_multiplyNum_underflow);

    return (UnityEnd());
}