#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long n, k;
    cin >> n >> k;
    long arr[n];
    for (long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int mid = n / 2;
    long difference = 0 , no_of_towers = 0 , division = 0;
    for (long i = mid+1; i < n; i++)
    {
        if(arr[i] > arr[mid]){
            difference = arr[i] - arr[mid];
            no_of_towers = i - mid;
            division = k / no_of_towers;
            if(division > difference){
                arr[mid] += difference;
                k -= (difference * no_of_towers);
            }
            else{
                arr[mid] += division;
                k -= (division * no_of_towers);
            }
            if(i == n-1 && arr[i] == arr[mid]){
                no_of_towers = n - mid;
                division = k / no_of_towers;
                arr[mid] += division;
                k -= (division * no_of_towers);
            }
        }
        else {
            if(i == n-1 ){
                no_of_towers = n - mid;
                division = k / no_of_towers;
                arr[mid] += division;
                k -= (division * no_of_towers);
            }
        }
    }
    if (n==1)
        arr[mid] += k;
    cout << arr[mid];
}