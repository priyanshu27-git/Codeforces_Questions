#include <iostream>
using namespace std;

bool isPalindrome(string str,int left , int right)
{
    int left = 0, right = str.length() - 1;
    while (left <= right)
    {
        if (str[left] != str[right])
        {
            break;
        }
        else
            left++;
            right--;
    }
    if (left >= right)
        return true;
    else
        return false;
}


  bool notPalindrome(string str) {
        int left = 0, right = str.length() - 1;
        while (left < right) {
            if (str[left] == str[right]) {
                return isPalindrome(str, left + 1, right) || isPalindrome(str, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if(isPalindrome){
        cout << "First";
        break;
        }
    }
// More to go......
}