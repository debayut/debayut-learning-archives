#include <iostream>

int main(){
    
    // memory address can be accessed using & operator (address-of-operator)

    int age = 25;
    std::cout << "Memory address of age: " << &age << std::endl

    // **************************  POINTERS  *************************************
    //***************************************************************************** 
    // A pointer is a variable that stores the memory address of another variable
    // & memory of operator
    // * dereference operator

    std::string x = "Hello";
    std::string y = "World";

    swap_by_value(x,y);
    swap_by_reference(&x, &y);

    return 0;
}

void swap_by_value(std::string a, std::string b){
    std::string temp = a;                          // notice how in output the values of x and y remain unchanged
    a = b;                                         // what happens here is that a copy of values of x and y are created and passed to the function
    b = temp;                                      // it does not affect the original variables x and y
}

void swap_by_reference(std::string* a, std::string* b){
    std::string temp = *a;                          // notice how in output the values of x and y are swapped
    *a = *b;                                         // what happens here is that the memory addresses of x and y are passed to the function
    *b = temp;                                      // it affects the original variables x and y because we are dereferencing the pointers to access the values at those memory addresses
}