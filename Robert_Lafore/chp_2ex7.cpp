// 7. You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
// by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number representing degrees Celsius, and then displays the corresponding degrees
// Fahrenheit.
#include<iostream>
using namespace std;
int main() {
    // float number;
    // cout<<"Enter a number";
    // cin>>number;
    // cout<<number*9/5+32;
    float degrees_fahrenheit, degrees_celsius;
cout<<"Enter the  degrees_celsius ";
cin>> degrees_celsius;

degrees_fahrenheit=(degrees_celsius*9/5)+32;
cout<<"The degrees_celsius is"<<degrees_fahrenheit;
return 0;
}
