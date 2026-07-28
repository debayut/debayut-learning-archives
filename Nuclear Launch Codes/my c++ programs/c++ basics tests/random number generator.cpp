#include <iostream>
#include <ctime>

int main(){

    srand(time(0));                      // Seed the random number generator with the current time

    int randomnumber1 = rand() % 10 ; // Generate a random number between 0 and 9
    int randomnumber2 = rand() % 10 + 1; // Generate a random number between 1 and 10

    std::cout << "Random Number 1: " << randomnumber1 << std::endl;
    std::cout << "Random Number 2: " << randomnumber2 << std::endl;

    return 0;
}