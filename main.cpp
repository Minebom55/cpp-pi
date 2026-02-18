#include <random>
#include <iostream>

int main() {
    // random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // uniform distribution between -1.0 and 1.0
    std::uniform_real_distribution<long double> dist(-1.0L, 1.0L);

    // generate values
    long double xPos = dist(gen);
    long double yPos = dist(gen);

    std::cout << xPos << "\n";
    std::cout << yPos << "\n";

    return 0;
}
