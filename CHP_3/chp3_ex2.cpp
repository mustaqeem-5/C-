#include<iostream>
using namespace std;
int main() {
//     *2. Write a temperature-conversion program that gives the user the option of converting
// Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
// floating-point numbers. Interaction with the program might look like this:
// Type 1 to convert Fahrenheit to Celsius,
// 2 to convert Celsius to Fahrenheit: 1
// Enter temperature in Fahrenheit: 70
// In Celsius that’s 21.111111

float fahrenheit, celsius;
int Temperature;

cout<<"Press 1 convert Fahrenheit to celsius: \n ";
cout<<"Press 2 convert celsius to Fahrenheit: ";
cin>> Temperature;

switch (Temperature)
{
    case 1:
    cout<<"Enter the fahreheit:";
    cin>>fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout<<"the celsius is: "<<celsius;
break;
    case 2:
     cout<<"Enter the celsius:";
    cin>>celsius;
    fahrenheit = (celsius * 9/5) +32;
    cout<<"the fahrenheit is: "<<fahrenheit;
break;
default:
cout<<"invalid";
break;
}

    return 0;
}