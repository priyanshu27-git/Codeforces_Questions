#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(3);
    float N;
    cin >> N;
    int integerPart = (int)N;
    float decimalPart = N - integerPart;
    if (decimalPart == 0)
        cout << "int" << " " << integerPart;
    else
        cout << "float " << integerPart << " " << decimalPart;
    return 0;
}