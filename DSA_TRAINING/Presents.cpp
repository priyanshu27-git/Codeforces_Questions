#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool isvisited[n];
    for (int i = 0; i < n; i++)
    {
        isvisited[i] = false;
    }
    int i=0,k=1;
    bool check = false;
    while (k <= n)
    {
        if(check) i = 0;
        check = false;
        if(arr[i] == k && isvisited[i] == false){
            cout << i+1 << " ";
            isvisited[i] = true; check = true; k++;
        } 
        i++;
    }
    return 0;
}