#include<iostream>
using namespace std;
int main() {
// *1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
// enter a number of gallons, and then displays the equivalent in cubic feet.
int cubic_foot;
float gallon=7.481;
cout<<"Enter the number of cubic_feet";
cin>>cubic_foot;
cubic_foot=cubic_foot*gallon;
cout<<cubic_foot;
return 0;
}