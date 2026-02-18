#include <iostream>
#include <random>

int main() {
    // Create random device and generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define range
    std::uniform_int_distribution<> dist(1, 100);

    // Generate random number
    int randomNumber = dist(gen);

    std::cout << randomNumber << std::endl;


    system("pause");
    return 0;
}
