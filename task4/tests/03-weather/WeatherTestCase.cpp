//
// Created by Pavel Akhtyamov on 02.05.2020.
//

#include "WeatherTestCase.h"
#include "WeatherMock.h"
using ::testing::Return;
using ::testing::_;
using ::testing::AtLeast;
TEST_F(WeatherTestCase, test_general) {
    std::vector<std::string> cities = {"Tokyo","Jakarta","Delhi","Mumbai","Manila","Shanghai","Seoul","Mexico City"};
    for (size_t i = 0; i < cities.size(); ++i) {
        EXPECT_CALL(weather_mock, GetTemperature(cities[i]))
        .Times(AtLeast(cities.size() * 2)) // 1 for GetTemperature and 1 for DifferenceString
        .WillRepeatedly(Return(i/2.));
        EXPECT_CALL(weather_mock, GetTomorrowTemperature(cities[i]))
        .Times(AtLeast(cities.size() * 2)) // 1 for TomorrowDiff and 1 for TomorrowTemperature
        .WillRepeatedly(Return(i/2.));

    }
    for (size_t i = 0; i < cities.size(); ++i) {
        for (size_t j = 0; j < cities.size(); ++j) {
            weather_mock.GetDifferenceString(cities[i], cities[j]);
            weather_mock.GetTemperature(cities[i]);
            weather_mock.GetTomorrowDiff(cities[i]);
            weather_mock.GetTomorrowTemperature(cities[i]);
        }
    }
}
