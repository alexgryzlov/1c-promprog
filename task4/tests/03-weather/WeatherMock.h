//
// Created by Pavel Akhtyamov on 02.05.2020.
//

#pragma once

#include <gmock/gmock.h>
#include <Weather.h>

class WeatherMock : public Weather {
public:
    MOCK_METHOD1(GetTemperature, float(const std::string&));
    MOCK_METHOD1(GetTomorrowTemperature, float(const std::string&));
};



