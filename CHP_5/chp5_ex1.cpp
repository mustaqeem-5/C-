// *1. Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called circarea() that finds the area of a circle in a similar way. It should take an
// argument of type float and return an argument of the same type. Write a main() function that gets a radius value from the user, calls circarea(), and displays the result
#include<iostream>
#include <cmath>
using namespace std;
float circarea(float radius) {
return M_PI * radius * radius;
}
int main() {
    float radius,area;
cout<<"Enter a radius: ";
cin>>radius;
area=circarea(radius);
cout<<"The area of a circle: "<<area;
    return 0;
}
