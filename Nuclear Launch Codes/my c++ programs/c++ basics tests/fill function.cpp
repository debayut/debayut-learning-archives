#include <iostream>

int main(){
    // fill() function fills up a range of elements with a specified value
    // syntax----> fill(begin,end,value)

    const int SIZE = 100;
    std::string arr[SIZE];

    std::fill(arr, arr + (SIZE/3), "pizza");
    std::fill(arr + (SIZE/3), arr + (2*SIZE/3), "burger");
    std::fill(arr + (2*SIZE/3), arr + SIZE, "pasta");

    for(int i = 0; i < SIZE; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}