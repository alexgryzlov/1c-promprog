
#pragma once

#include <gtest/gtest.h>
#include "WeatherMock.h"

class WeatherTestCase : public ::testing::Test {
protected:
    void SetUp() override {
    }
    WeatherMock weather_mock;
};



