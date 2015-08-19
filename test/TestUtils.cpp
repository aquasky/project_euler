#include <iutest/iutest.hpp>
#include "../Problem/Utils.h"

IUTEST(modTest, Nums) {
    IUTEST_ASSERT_EQ(0, mod(0, 2));
    IUTEST_ASSERT_EQ(0, mod(1, 1));
    IUTEST_ASSERT_EQ(1, mod(1, 2));
    IUTEST_ASSERT_EQ(1, mod(1, 3));
    IUTEST_ASSERT_EQ(1, mod(1, 4));
    IUTEST_ASSERT_EQ(1, mod(1, 5));
    IUTEST_ASSERT_EQ(0, mod(2, 1));
    IUTEST_ASSERT_EQ(0, mod(3, 1));
    IUTEST_ASSERT_EQ(0, mod(4, 1));
    IUTEST_ASSERT_EQ(0, mod(5, 1));
    IUTEST_ASSERT_EQ(0, mod(7, 1));
    IUTEST_ASSERT_EQ(1, mod(7, 2));
    IUTEST_ASSERT_EQ(1, mod(7, 3));
    IUTEST_ASSERT_EQ(3, mod(7, 4));
    IUTEST_ASSERT_EQ(2, mod(7, 5));
    IUTEST_ASSERT_EQ(1, mod(7, 6));
    IUTEST_ASSERT_EQ(1, mod(1, 7));
    IUTEST_ASSERT_EQ(2, mod(2, 7));
    IUTEST_ASSERT_EQ(3, mod(3, 7));
    IUTEST_ASSERT_EQ(4, mod(4, 7));
    IUTEST_ASSERT_EQ(5, mod(5, 7));
    IUTEST_ASSERT_EQ(6, mod(6, 7));
    IUTEST_ASSERT_EQ(0, mod(7, 7));
}

IUTEST(isMultipleTest, Nums) {
    IUTEST_ASSERT_FALSE(isMultiple(0, 1));
    IUTEST_ASSERT_TRUE(isMultiple(1, 1));
    IUTEST_ASSERT_TRUE(isMultiple(2, 1));
    IUTEST_ASSERT_TRUE(isMultiple(3, 1));
    IUTEST_ASSERT_TRUE(isMultiple(32, 1));
    IUTEST_ASSERT_TRUE(isMultiple(32, 2));
    IUTEST_ASSERT_TRUE(isMultiple(32, 4));
    IUTEST_ASSERT_TRUE(isMultiple(32, 8));
    IUTEST_ASSERT_TRUE(isMultiple(32, 16));
    IUTEST_ASSERT_TRUE(isMultiple(32, 32));
    IUTEST_ASSERT_FALSE(isMultiple(7, 2));
    IUTEST_ASSERT_FALSE(isMultiple(7, 3));
    IUTEST_ASSERT_FALSE(isMultiple(7, 4));
    IUTEST_ASSERT_FALSE(isMultiple(7, 5));
    IUTEST_ASSERT_FALSE(isMultiple(7, 6));
    IUTEST_ASSERT_FALSE(isMultiple(7, 8));
}
