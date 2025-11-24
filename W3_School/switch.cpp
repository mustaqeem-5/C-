#include <iostream>
using namespace std;
int main() {
    int day;
    cout<<"Enter the number: ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Teusday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
    default:
        break;
    // switch (day)
    // {
    // case 1:
    //     cout<<"Today is monday";
    //     break;
    //     case 7:
    //     cout<<"Today is sunday";
    //     break;
     
    // default:
    // cout<<"Looking to the weekend forword";
    //     break;
    // }
    }
   
    return 0;
}