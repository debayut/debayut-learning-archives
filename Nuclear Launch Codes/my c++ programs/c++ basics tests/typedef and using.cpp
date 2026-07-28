#include <iostream>
#include <vector>

// typedef is used to create an alias for a data type
// it can be used to make code more readable and easier to understand
typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef std::string text_t;

// this is another way to create an alias for a data type
using text = std::string; 

int main(){

    pairlist_t pairlist1;

    text_t text1 = "this will behave exactly like a string";


    return 0;
}