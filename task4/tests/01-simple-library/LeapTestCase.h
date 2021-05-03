//
// Created by akhtyamovpavel on 5/1/20.
//


#pragma once

#include <gtest/gtest.h>

class LeapTestCase : public ::testing::Test {
protected:
    std::vector<int> days_leap = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<int> days_nonleap= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
};


