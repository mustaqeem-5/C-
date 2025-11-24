#include<iostream>
using namespace std;
float calculator(float num1, float num2,char op)
{
switch (op)
{
case '+':
    return num1 + num2;
 case '-':
    return num1 - num2;
case '*':
    return num1 * num2;
case '/':
    return num1 / num2;
default:
}
}
int main () {
    float a,b;
    char op;
cout<<"Enter a First_number: ";
cin >> a;
cout<<"Enter a Operators: ";
cin >> op;
cout<<"Enter a Second_number: ";
cin >> b;
cout <<calculator;
    return 0;
}