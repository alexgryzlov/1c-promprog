#include "main.h"
int main() {
    std::vector<int> my_vector = {1, 2};
    std::cout << my_vector[0] << ' ' << my_vector[1] << std::endl;
    std::cout << add(my_vector[0], my_vector[1]) << std::endl;
    std::cout << sub(my_vector[0], my_vector[1]) << std::endl;
    return 0;
}
