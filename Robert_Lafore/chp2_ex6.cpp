// 6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
// $0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
// Write a program that allows the user to enter an amount in dollars, and then displays this
// value converted to these four other monetary units.
#include<iostream>
using namespace std;
int main() {
    float Britishpound;
    cout<<"Enter a amount";
    cin>> Britishpound;
    cout<< Britishpound * 1.487 <<"\n";

    float French;
    cout<<"Enter a amount";
    cin>> French;
    cout<< French * 0.172 <<"\n";

    float German;
    cout<<"Enter a amount";
    cin>> German;
    cout<< German * 0.584 <<"\n";

    float Japaneseyen;
    cout<<"Enter a amount";
    cin>> Japaneseyen;
    cout<< Japaneseyen * 0.00955 ;
return 0;
}