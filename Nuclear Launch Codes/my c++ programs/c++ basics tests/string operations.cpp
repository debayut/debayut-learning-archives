#include <iostream>

int main(){

    std::string name;

    name.length() ; // returns the length of the string

    name.empty() ; // returns true if the string is empty, otherwise false
    name.clear() ; // clears the string, making it empty
    name.erase(0, 3) ; // erases 3 characters from index 0 , so from index 0 to index 2

    name.append("Hello") ; // appends the string "Hello" to the end of the string
    name.insert(0, "Hi ") ; // inserts the string "Hi " at index 0 of string
    name.replace(0, 2, "Hey") ; // replaces 2 characters from index 0 with the string "Hey"

    name.at(0) ; // returns the character at index 0 of the string
    name.substr(0, 3) ; // returns a substring of the string starting from index 0 and of length 3
    name.find("lo") ; // returns the index of the first occurrence of the substring "lo" in the string, or std::string::npos if not found

    return 0;
    
}