 #include <iostream>

 int main(){

    // (condition) ? (value if true) : (value if false)

    int a = 10, b = 20;

    int max = (a > b) ? a : b;
    std::cout<< "bigger number is " << max <<'\n';

    // for boolean values

    bool iseven = true;
    (iseven) ? std::cout << "even" : std::cout << "odd";


    return 0;
 }