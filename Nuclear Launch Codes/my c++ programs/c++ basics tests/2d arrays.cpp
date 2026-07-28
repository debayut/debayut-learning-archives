#include <iostream>

int main (){

    std::string cars[3][4] = {
        {"Volvo", "BMW", "Ford", "Mazda"},
        {"Tesla", "Audi", "Mercedes", "Honda"},
        {"Toyota", "Nissan", "Hyundai", "Kia"}
    };

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}