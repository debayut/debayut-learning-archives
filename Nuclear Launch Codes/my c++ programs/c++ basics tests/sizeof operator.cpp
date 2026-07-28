#include <iostream>

int main (){

    // sizeof() operator gives the size of a variable/data type/class in bytes

    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;

    // can also be used to determine no of characters in array

    std::string students[] = {"kaze","miao","jperi"};
    std::cout << "Number of students: " << sizeof(students) / sizeof(std::string) << std::endl;
    return 0;
}