#include <random>
#include <iostream>
#include <thread>

int miss = 0;
int hit = 0;
int ggr;







long double pyt(long double a, long double b) {
    long double a2 = a*a;
    long double b2 = b*b;

    return sqrt(a2 + b2);
}

// random number generator
std::random_device rd;
std::mt19937 gen(rd());

std::uniform_real_distribution<long double> dist(-1.0L, 1.0L);

int main() {
    std::cout << "Type how many times it will place dots: ";
    std::cin >> ggr;
    int oggr = ggr;
    while (ggr > 0) {


        long double xPos = dist(gen);
        long double yPos = dist(gen);

        /*debuging
        std::cout << xPos << "\n";
        std::cout << yPos << "\n";
        */

        long double pyth = pyt(xPos, yPos);
        //std::cout << pyth << std::endl;

        if (pyth <= 1.0L) {
            hit++;
            //std::cout << hit << std::endl;
        }
        else {
            miss++;
            //std::cout << miss << std::endl;
        }
        ggr--;
        }


    long double output_pi = 4.0L * hit / oggr;

    std::cout << "------------------" << std::endl;
    std::cout << "pi: " << output_pi << std::endl;
    std::cout << "total points: " << oggr << std::endl;
    std::cout << "hits: " << hit << std::endl;
    std::cout << "misses: " << miss << std::endl;

    return 0;
}
