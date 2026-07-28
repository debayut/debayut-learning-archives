#include <iostream>

int main()
{   
    /*
    std::string name;
    std::cout << "What's your name? ";                    // << insertion operator
    std::cin >> name;                                     // >> extraction operator
    std::cout << "Hello, " << name << "! \n";
    */
    // but its faulty, it only takes the first word of the name; so if you enter "akuryo Mizuhara" it will only take "akuryo"
    // use getline() function

    std::string full_name;
    /*
    std::cout << "Enter your full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Hello, " << full_name << "! \n";
    */

    // but again, it has a problem, if you enter "John Doe", it will take "akuryo" as the name and "mizuhara" as the next input, 
    // so we need to clear the input buffer before using getline() function 

    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws , full_name);
    std::cout << "Hello, " << full_name << "! \n";

    return 0;
}