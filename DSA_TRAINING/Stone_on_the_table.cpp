#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (char i = 0; i < n-1; i++)
    {
        if(str[i] == str[i+1])
        count++;
    }
    cout << count;
    
    return 0;
}