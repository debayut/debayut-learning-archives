#include <iostream>


namespace first{
    int x=1;
}
namespace second{
    int x=2;
}


int main(){

    // A Namespace provides a solution for preventing name conflicts in large projects
    // each entity needs a unique name
    // a Namespace allows for identically named entities to co-exist in the same program as long as they are in different namespaces

    int x=0;
    std::cout << x << '\n';                       // uses x = 0
    std::cout << first :: x << '\n';              // uses x = 1                            // :: is the scope resolution operator
    std::cout << second :: x << '\n';             // uses x = 2

    return 0;
}

int block2(){
    
    // another way
    using namespace first;                        // using directive
    std::cout << x << '\n';                       // uses x = 1 (from first namespace)
}


int block3(){
    
    using namespace std;
    cout << "Hello World!" << '\n';              // uses cout from the std namespace + little bit less typing

     return 0;
}

int block4(){
    using std::cout;                            // can also use specific entities from a namespace...
    cout << "Hello World!" << '\n';             

     return 0;
}