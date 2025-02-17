#include "utils.hpp"

int Utils::getRandomNumber(int start, int end)
{
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(start, end);

    return distr(eng);
}
