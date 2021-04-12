#include <gtest/gtest.h>
#include <A/index.h>
#include <B/lib.h>

TEST(lib, add) { 
    EXPECT_EQ (5, add(2, 3));
}

TEST(index, sub) {
    EXPECT_EQ (-1, sub(2, 3));
}

