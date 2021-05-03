#include <Weather.h>
#include <iostream>
int main() {
  Weather weather;
  weather.SetApiKey("7d132df2b430cfa8457dc35ca5d85c63");

  std::cout << weather.GetTemperature("London") << std::endl;
  std::cout << weather.GetTomorrowTemperature("London") << std::endl;
  std::cout << weather.GetTomorrowDiff("Moscow") << std::endl;
}