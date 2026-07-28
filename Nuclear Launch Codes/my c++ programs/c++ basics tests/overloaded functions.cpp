#include <iostream>

void bakepizza();
void bakepizza(std :: string topping);
void bakepizza(std :: string topping1, std :: string topping2);

int main(){
    bakepizza();
    bakepizza("pepperoni");
    bakepizza("pineapple", "ham");
    return 0;
}

void bakepizza(){                                                                     // function with no parameters
    std :: cout << "here's your pizza " << '\n';
}

void bakepizza(std :: string topping){                                               // similar function with one parameter
    std :: cout << "here's your pizza with " << topping << " topping " << '\n';
}

void bakepizza(std :: string topping1, std :: string topping2){                      // similar function with two parameters
    std :: cout << "here's your pizza with " << topping1 << " and " << topping2 << " toppings " << '\n';
}