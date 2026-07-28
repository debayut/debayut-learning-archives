#include <iostream>

int main(){

    std::string cars[4];

    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";

    // or simply ----> std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";
    std::cout << cars[3] << "\n";

    // or use a for loop 
    for (int i = 0; i < 4; i++){
        std::cout << cars[i] << "\n";
    }

    // a better way would be 
    for(int i = 0; i < sizeof(cars) / sizeof(std::string); i++){
        std::cout << cars[i] << "\n";
    }

    // even better way
    for (std::string car : cars){
        std::cout << car << "\n";
    }

    return 0;
}