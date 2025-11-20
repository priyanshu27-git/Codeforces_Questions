#include <iostream>
using namespace std;
int main() 
{
    int X;
    cin >> X;
    int first;
    while(X>0){
        //  first = X % 10;
         X /= 10;
    }
    if(first % 2 == 0)
    cout << "EVEN";
    else
    cout << "ODD";
    return 0;
}