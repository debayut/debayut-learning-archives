#include <iostream>

void birthdaywisher(std :: string name){
    std :: cout << "Happy birthday " << name << "!!" << '\n';
}

int main (){

    std :: string name;
    
    std :: cout << "Enter the name of the birthday person: ";
    getline(std:: cin, name);

    birthdaywisher(name);

    return 0;
}