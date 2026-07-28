#include <iostream>

int main(){

    // for loops
    for (int i = 0; i < 5; i++){
        std::cout << i << '\n';
    }

    // while loops
    while (true){
        std::cout << "This loop will run forever!" << '\n';
    }

    // do while loops
    do {
        std::cout << "This loop will run at least once!" << '\n';
    } while (false);



    // ********************************************************************************************************************************************
    // break and continue

    for (int i = 0; i < 10; i++){
        if (i == 5){
            break;                                            // this will print only from 0 to 4
        }
        std::cout << i << '\n';
    }

    for (int i = 0; i < 10; i++){
        if (i == 5){
            continue;                                        // this will print from 0 to 9 but skip 5
        }
        std::cout << i << '\n';
    }

    return 0;
}