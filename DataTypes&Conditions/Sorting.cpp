#include <iostream>
using namespace std;
int main() 
{
    int A,B,C;
    cin >> A >> B >> C;

    if (A <= B && A <= C) {
        cout << A << endl;
        if (B <= C) {
            cout << B << endl << C;
        }
        else
            cout << C << endl << B;
    }
    else {
        if (A >= B) {
            if (A >= C) {
                if (B >= C)
                    cout << C << endl << B << endl << A;
                else
                    cout << B << endl << C << endl << A;
            }
            else {
                cout << B << endl << A << endl << C;
            }
        }
        else {
            cout << C << endl << A << endl << B;
        }
    }

    cout << endl << endl << A << endl << B << endl << C;

}