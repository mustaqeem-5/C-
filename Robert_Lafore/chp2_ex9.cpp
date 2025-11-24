#include<iostream>
using namespace std;

int main(){
    
//  9. If you have two fractions, a/b and c/d, their sum can be obtained from the formula
// a c a*d + b*c
// --- + --- = -----------
// b d b*d
// For example, 1/4 plus 2/3 is
// 1 2 1*3 + 4*2 3 + 8 11
// --- + --- = ----------- = ------- = ----
// 4 3 4*3 12 12
// Write a program that encourages the user to enter two fractions, and then displays their
// sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction
// with the user might look like this:
// Enter first fraction: 1/2
// Enter second fraction: 2/5
// Sum = 9/10
// You can take advantage of the fact that the extraction operator (>>) can be chained to
// read in more than one quantity at once:
// cin >> a >> dummychar >> b;

// int a;
// int b;
// int c;
// int d;
// cout<<"Enter the number";
// cin>>a;
// cout<<"Enter the number";
// cin>>b;
// cout<<"Enter the number";
// cin>>c;
// cout<<"Enter the number";
// cin>>d;
// int m=a/b+c/d;
// cout<<m;

// int a;
// int b;
// int c;
// int d;
// cout<<"Enter two number a/b in format ";
// char slash ='/';
// cin >> a >> slash >> b ; 

// cout<<"1st value is ";

// // float formula = (((a*b) + (b*c)) / (b*d));

// // cin >>  c >> slash >> d;

// // cout<<"2nd  value is ";
// // cout << c << slash << d ;
// // int result= (a/b+c/d);
// // cout<<result;



int a,b,c,d;
char slash;
cout<<"Enter First Fraction: (1/2)";
cin>>a>>slash>>b;

cout<<"Enter Second Fraction: (2/5)";
cin>>c>>slash>>d;
     return 0;
}