#include<iostream>
using namespace std;
int main () {
    // 6. Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
// calculates its factorial, until the user enters 0, at which point it terminates. You can
// enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
// effect.
int number,Factorial;
    cout<<"Enter a number";
cin>>number; 
Factorial=number;
int i;
for ( i = 1; i < number; i++)
{
    Factorial=Factorial*i;
}
cout<<"Factorial:" <<Factorial; 
return 0;
}
