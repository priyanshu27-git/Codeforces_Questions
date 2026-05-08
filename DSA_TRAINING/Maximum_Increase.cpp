#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 1;
    int current_size = 1, Max_Size = 1;
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            count++;
            current_size = count;
        }
        else
        {
            count = 1;
        }
        if (current_size > Max_Size)
        {
            Max_Size = current_size;
        }
    }

    cout << Max_Size;
    return 0;
}