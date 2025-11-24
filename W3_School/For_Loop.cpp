#include<iostream>
using namespace std;
int main() {
// for (int i = 0; i <5 ; i++)
// {
//     cout<<i;
// }

// for (int i = 0; i <=11 ;i= i+3)
// {
//     cout<<i;
// }
// int sum=0;
// for (int i = 1; i <=6 ; i++)
// {
//     sum = sum+i;
   
// }
//  cout<<sum;

// for (int i = 5; i >0 ; i--)
// {
//     cout<<i;

// }

          // Nested Loop

// for (int i = 1; i <=2; i++)
// {
//     cout<<"outer"<<i<<endl;

//     for (int j = 1; j <=3 ; ++j)
//     {
//       cout<<"inner"<<j<<endl;  
//     }
    
// }

// for (int i = 1; i <=3; ++i)
// {
//    for (int j = 1; j <=3; ++j)
//    {
//     cout<<i*j <<" ";
//    }
//    cout<<"\n";
// }

// int mynum[5]={10,20,30,40,50};
// for (int i : mynum)
// {
//    cout<<i;
// }
    
// string word = "Hello";
// for(char c: word) 
// {
//  cout<<c<<"\n";
// }


//  int number = 2;
//   int i;

//   // Print the multiplication table for the number 2
//   for (i = 1; i <= 10; i++) {
//     cout << number << " x " << i << " = " << number * i << "\n";
//   }

// for (int i = 0; i <=5 ; i++)
// {
//     cout<<i <<"\n";
// }

// int number=5;
// int i;
// for ( i = 1; i <=10; i++)
// {
//     cout<<number<<"x"<<i<<"="<<number*i <<"\n";
// }

// for (int i = 0; i <=100 ; i+=10)
// {
//     cout<<i <<"\n";
// }
// for (int i = 0; i <=10 ; i+=2)
// {
//    cout<<i;
// }
int number;
int i;
cout<<"Enter a number";
cin>>number;
for ( i = 1; i <= 10; i++)
{
    cout<<number<<"x"<<i<<"="<<number*i<<"\n";
}



return 0;
}