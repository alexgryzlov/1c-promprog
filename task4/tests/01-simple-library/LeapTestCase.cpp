//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>

TEST_F(LeapTestCase, test1) {
    EXPECT_ANY_THROW(IsLeap(-1));
    for (int i = 2000; i < 2100; i += 4) EXPECT_TRUE(IsLeap(i));
    for (int i = 2000; i < 2100; ++i) if (i % 4) EXPECT_FALSE(IsLeap(i));
    EXPECT_FALSE(IsLeap(2100));
    EXPECT_TRUE(IsLeap(2400));
    for (int i = 1; i <= 12; ++i) {
        ASSERT_EQ(GetMonthDays(2000, i), days_leap[i]);
        ASSERT_EQ(GetMonthDays(2001, i), days_nonleap[i]);
    }
    EXPECT_THROW(GetMonthDays(1, -1), std::invalid_argument);
    EXPECT_THROW(GetMonthDays(1, 13), std::invalid_argument);
}
