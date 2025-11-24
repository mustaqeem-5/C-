#include<iostream>
using namespace std;
int main() {
    // int i=0;
    // while (i<5) 
    // {
    //   cout<< i <<"\n"; 
    //   i++;
    // }

    // int countdown=3;
    // while (countdown)
    // {
    //     cout<<countdown<<"\n";
    //     countdown--;
    // }
    // cout<<"Happy new year!!";

    // int i=0;
    // while (i<5)
    // {
    //     cout<<i<<"\n";
    //     i++;
    // }
    // int i=0;
    // do
    // {
    //     cout<<i <<"\n";
    //     i++;
    // } while (i<5);

    
    
//      int i = 4;
//   do {
//     cout << "i is " << i << "\n";
//     i++;
//   } while (i < 5);

// int number;
// do
// {
//     cout<<"Enter a number";
//     cin>>number;
// } while (number>0);

// int number = 12345;
// int revnumber = 0;
// while (number) {
//     revnumber = revnumber * 10 + number % 10;
//     number /= 10;
//     cout<<"Reverse number: " << revnumber <<"\n";
// }
  
int dice = 1;
while (dice<=6) {
    if (dice<6) {
        cout<<"not yatzy\n";
    } else{
        cout<<"yatzy!\n";
    }
    dice = dice + 1;
}
//  int dice = 1;

//   while (dice <= 6) {
//     if (dice < 6) {
//       cout << "No Yatzy\n";
//     } else {
//       cout << "Yatzy!\n";
//     }
//     dice = dice + 1;
//   }


    return 0;
}