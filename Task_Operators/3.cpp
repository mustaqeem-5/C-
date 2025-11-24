#include <iostream>
using namespace std;
int main(){
    // Logical And 
    int x=55;
    int y=50;
    cout<<(x>y&&x<y)<<"\n";

    // Logical OR  
    cout <<(x>y||x<y)<<"\n";

    // Logical Not 
    cout <<(!(x>y&&x<y));
    return 0;
}