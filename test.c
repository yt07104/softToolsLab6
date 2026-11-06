#include "unity.h"
#include "calc.c"

void setUp(void) {}     // Not needed yet
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
}

void test_sub(void){
    TEST_ASSERT_EQUAL(13, sub(20, 7));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    return UNITY_END();
}
