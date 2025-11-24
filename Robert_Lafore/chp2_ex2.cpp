#include<iostream>
#include <iomanip>
using namespace std;
int main() {
//  *2. Write a program that generates the following table:
// 1990 135
// 1991 7290
// 1992 11300
// 1993 16200
// Use a single cout statement for all output.
long m1=135, m2=7290, m3=11300, m4=16200;
cout <<setw(8)<<"1990"<< setw(8) << m1 <<"\n" 
    <<setw(8)<<"1991" <<setw(8) << m2 <<"\n"
    <<setw(8)<<"1992" <<setw(8) << m3 <<"\n"
    <<setw(8)<<"1993" <<setw(8) << m4;
    return 0;
}