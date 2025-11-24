#include <iostream>
using namespace std;
int main(){
    int x = 5;
    x += 3;
    cout <<x <<"\n";
    x -= 3;
    cout << x <<"\n";
    x *= 3;
    cout << x <<"\n";
    x /= 3;
    cout << x <<"\n";
    x %= 3;
    cout << x <<"\n";
    x &= 3;
    cout << x <<"\n";
    x |= 3;
    cout << x <<"\n";
    x ^= 3;
    cout << x <<"\n";
    x >>= 3;
    cout << x << "\n";
    x <<= 3;
    cout << x <<"\n"; 
    return 0;
}