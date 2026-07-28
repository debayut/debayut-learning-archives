#include <iostream>
#include <ctime>

int main (){

    srand(time(0));  // takes current time as seed for random generation
    int randomnumber1 = rand() % 5 + 1;

    switch( randomnumber1)
    {
        case 1:
            std::cout << "Event 1 occurred." << std::endl;
            break;
        case 2:
            std::cout << "Event 2 occurred." << std::endl;
            break;
        case 3:
            std::cout << "Event 3 occurred." << std::endl;
            break;
        case 4:
            std::cout << "Event 4 occurred." << std::endl;
            break;
        case 5:
            std::cout << "Event 5 occurred." << std::endl;
            break;
    }

    return 0;
}