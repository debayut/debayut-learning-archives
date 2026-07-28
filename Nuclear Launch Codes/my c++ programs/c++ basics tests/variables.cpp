#include <iostream>

int main() {

    int x;   // or int x = 5; directly ...
    x = 5;

    int y = 10; 
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n'; // or  std::cout << x+y << '\n';


    // doubles 
    double pi = 3.14159;
    // characters
    char letter = 'A';
    // booleans
    bool isTrue = true;
    // string 
    std::string name = "debayut";
    std::cout << name << '\n';
    
    // now you can combine this in printing as
    std::cout << "this is "<< name << '\n';

    return 0;
}