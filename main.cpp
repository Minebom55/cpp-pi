#include <random>
#include <iostream>
#include <iomanip>
#include <chrono>

int miss = 0;
int hit = 0;
int ggr;
int progggr;
int dec;
long double output_pi;

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
    std::cout << "How many decimal places: ";
    std::cin >> dec;
    int oggr = ggr;
    auto start_time = std::chrono::steady_clock::now();
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

      //  progggr = oggr -ggr;
      //  std::cout << 4.0L * hit / progggr << std::endl; //Comment out this line
        //to type the pi every time. Will hurt preformance

        ggr--;
        }
    auto end_time = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration<long double>(end_time - start_time).count();

    long double output_pi = 4.0L * hit / oggr;

    std::cout << "------------------" << std::endl;
    std::cout << "pi: " << std::fixed << std::setprecision(dec) << output_pi << std::endl;
    std::cout << "total points: " << oggr << std::endl;
    std::cout << "hits: " << hit << std::endl;
    std::cout << "misses: " << miss << std::endl;
    std::cout << "time taken: " << std::fixed << std::setprecision(6) << elapsed << " seconds" << std::endl;

    system("pause");
    return 0;
}
