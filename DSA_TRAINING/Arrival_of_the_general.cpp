#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0], min_index = 0;
    int max = arr[0], max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    int count = 0;
    int max_index_ = max_index;
    while(max_index > 0){
        count++;
        max_index--;
    }
    if(max_index_ > min_index){
        min_index++;
    }
    while (min_index < n-1)
    {
        count++;
        min_index++;
    }
    cout << count;
}