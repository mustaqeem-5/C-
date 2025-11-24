#include<iostream>
using namespace std;

int main(){

//     char slash;
//  int a,b,c,d;
// int result;

// do
// {

// char slash;
// cout<<"Enter First Fraction: ";
// cin>>a>>slash>>b;

// cout<<"Enter Second Fraction: ";
// cin>>c>>slash>>d;

// cout<<"continue press y to exit n";
// cin>>result;

// do{
//    cout<<"Enter first number ";
//     cin>>a>>slash>>b;
//     cout<<"operator";
//     cin>>operator;
//     cout<<"Enter second number";
//     cin>>c>>slash>>d;;
//    switch (operator)
//  {
//  case '+':
//     cout<<a,b + c,d;
//     break;
//  case '-':
//     cout<<a,b - c,d;
//     break;
//     case '*':
//     cout<<a,b * c,d;
//     break;
//     case '/':
//     cout<<a,b / c,d ;
//     break;
//  default:
//  break;}
//   } 
//   while (result == 'y');  

// 12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
// Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
// applied to fractions:
// Addition: a/b + c/d = (a*d + b*c) / (b*d)
// Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
// Multiplication: a/b * c/d = (a*c) / (b*d)
// Division: a/b / c/d = (a*d) / (b*c)
// The user should type the first fraction, an operator, and a second fraction. The program
// should then display the result and ask whether the user wants to continue.

float a,b,c,d;
char slash;
char op;
char repeat;
do
{
    cout<<"Enter the First Fraction";
cin>>a>>slash>>b;
cout<<"operator";
cin>>op;
cout<<"Enter the second Fraction";
cin>>c>>slash>>d;
switch (op)
{
case '+':
    cout<<(a*d + b*c) / (b*d);
    break;
    case '-':
    cout<<(a*d - b*c) / (b*d);
    break;
    case '*':
    cout<<(a*c) / (b*d);
    break;
    case '/':
    cout<<(a*d) / (b*c);
    break;
default:
    break;
}
    cout<<"Do you want to continue y/n";
cin>>repeat;
}
while ( repeat == 'y');

return 0;
}
