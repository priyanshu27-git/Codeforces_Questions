#include <iostream>
#include<algorithm>
// #include<functional>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int sum_of_allcoins = 0;
    for (int i = 0; i < n; i++)
    {
        sum_of_allcoins += coins[i];
    }

    sort(coins, coins+n , greater<int>());

    for (int i = 0; i < n; i++)
    {
        sum1 += coins[i]; 
        int sum2 = sum_of_allcoins - sum1;
        if(sum1 > sum2){
            cout << i+1;
            return 0;
        }
    }
}