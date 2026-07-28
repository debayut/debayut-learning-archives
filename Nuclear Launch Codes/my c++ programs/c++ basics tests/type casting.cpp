#include <iostream>

int main(){

    // type conversion of one data type to another data type is called type casting
    // there are two types of type casting
    // 1. implicit type casting
    // 2. explicit type casting

    std::cout << (char) 65 << '\n'; // explicit type casting
    std::cout << (int) 'A' << '\n'; // explicit type casting

    std::cout << 65 << '\n'; // implicit type casting
    std::cout << 'A' << '\n'; // implicit type casting


    int correct = 8;
    int questions = 10;
    double percentage = (double) correct / questions * 100; // explicit type casting
    std::cout << "Percentage: " << percentage << '%' << '\n';
    
    return 0;
}