#include <iostream>
using namespace std;

int main()
{
    long long s1, s2, s3, s4;
    int count = 0;
    cin >> s1 >> s2 >> s3 >> s4;
     
    if(s1 == s2){
        count++;
    }

    if(s3 == s1 || s3 == s2){
        count++;
    }

    if(s4 == s1 || s4 == s2 || s4 == s3){
        count++;
    }

    cout << count;
}