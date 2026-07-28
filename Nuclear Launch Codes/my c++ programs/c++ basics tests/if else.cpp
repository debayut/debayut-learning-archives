#include <iostream>

int main(){

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "You are a minor" ;
    } else if (age >= 18 && age < 65) {
        std::cout << "You are an adult";
    } else {
        std::cout << "You are a senior citize";
    }
}