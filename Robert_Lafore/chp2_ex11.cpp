// 11. By default, output is right-justified in its field. You can left-justify text output using the
// manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
// means.) Use this manipulator, along with setw(), to help generate the following output:
// Last name First name Street address Town State
// ------------------------------------------------------------
// Jones Bernard 109 Pine Lane Littletown MI
// O’Brian Coleen 42 E. 99th Ave. Bigcity NY
// Wong Harry 121-A Alabama St. Lakeville IL

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
cout<<setw(8)<<"Last name"<<setw(13)<<"First name"<<setw(8)<<"Street"<<setw(12)<<"Address"<<setw(8)<<"Town"<<setw(15
)<<"State"<<setw(8)<<endl
<<setw(5)<<"Malick"<<setw(15)<<"Mustaqeem"<<setw(6)<<"10"<<setw(14)<<"colony"<<setw(15)<<"Mirpurkhas"<<setw(12)<<"Pakistan"<<endl;
return 0;
}