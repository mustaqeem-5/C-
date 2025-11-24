#include<iostream>
using namespace std;
int main () {
// 10. Write another version of the program from Exercise 7 so that, instead of finding the final
// amount of your investment, you tell the program the final amount and it figures out how
// many years it will take, at a fixed rate of interest compounded yearly, to reach this
// amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
// years; use an integer value for the year.)
int year;
float final_amount , amount , interest ,compound;
cout<<" Enter final_amount ";
 cin>>final_amount;
 cout<<"Enter amount";
 cin>>amount;
cout<<"Enter rate of interest ";
cin>>interest;
compound=amount;
while (compound<final_amount)
{
    compound*=(1+(interest/100));
    year++;
}
cout<<year<<interest<<final_amount;
return 0;
}