#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count_small = 0, count_capital = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if((int)str[i] >= 97) 
            count_small++;
        else
            count_capital++;
    }
    if(count_capital > count_small){
        for (int i = 0; i < str.length(); i++)
        {
            if((int)str[i] >= 97){
                str[i] = (int)str[i] - 32;// small to capital 
            }
        }
        cout << str;
    }
    else if (count_capital <= count_small)
    {
        for (int i = 0; i < str.length(); i++)
        {
                if((int)str[i] >= 65 && (int)str[i] < 97)
                str[i] = (int)str[i] + 32;// Capital to small
        }
        cout << str;
    }
    return 0;
}