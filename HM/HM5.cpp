#include<iostream>
using namespace std;
int main() {
int m=4;
int num=1;
for (int i = 1; i <=m; i++)
{
    for (int j = 1; j >= i ; j--)
    {
        cout<<"";
    }
    for (int k = 1; k <=i ; k++)
    {
        cout<<num++;
    }   cout<<endl;
}
    return 0;
}