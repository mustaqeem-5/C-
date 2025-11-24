#include<iostream>
using namespace std;
int main() {
int m=5;
for (int i = 1; i <=m; i++)
{
    for (int j = m; j >= i ; j--)
    {
        cout<<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout<<"l";
    }
    cout<<endl;
    
}

    return 0;
}