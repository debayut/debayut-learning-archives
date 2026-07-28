#include <iostream>
#include <cmath>

// head to cplusplus.com/reference/cmath for more math functions 

int main( {

    double x = 3.4;
    double y = 2.1;
    double result;

    result = std::max(x, y);
    result = std::min(x, y);
    
    result = pow(x, y);        // x to the power of y
    result = sqrt(x);
    result = abs(x - y);       // absolute value 
    result = round(x);
    result = ceil(x);          // rounds up to the nearest integer
    result = floor(x);         // rounds down to the nearest integer

    result = sin(x);           // here x is in radians
    result = cos(x);
    result = tan(x);

    result = asin(x);          // inverse sine, returns the angle in radians
    result = acos(x);
    result = atan(x);

    result = sinh(x);          // hyperbolic functions
    result = cosh(x);
    result = tanh(x);
})