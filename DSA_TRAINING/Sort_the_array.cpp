#include <iostream>
#include <algorithm>
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

    int sortedArray[n];
    for (int i = 0; i < n; i++)
    {
        sortedArray[i] = arr[i];
    }
    int count=0;
    sort(sortedArray, sortedArray + n);
    for (long i = 0; i < n; i++)
    {
        if (arr[i] != sortedArray[i])
        {
            count++;
        }
    }

     if(count == 0){
        cout << "yes" << endl
             << 1 << " " << 1;
             return 0;
    }

    int left = 0, right = 0;
    int first = 0, second = 0;
    int segment = 0;
    bool check = false;
    while (right < n)
    {
        if (right + 1 != n && arr[right] > arr[right + 1])
        {
            if (check)
                right++;
            else
            {
                left = right;
                right++;
            }
            if (arr[left] > arr[right])
            {
                first = right + 1;
                second = left + 1;
                check = true;
            }
        }
        else if (left > 0 && right < n - 1 && check)
        {
            if (arr[first - 1] > arr[second - 2] && arr[second - 1] < arr[first]){
                right++;
                segment++;
                check = false;
            }
        }
        else if (right < n - 1 && check)
        {
            if (arr[second - 1] < arr[first + 1]){
                right++;
                segment++;
                check = false;
            }
        }
        else if (left > 0 && check)
        {
            if (arr[first - 1] > arr[second - 2]){
                right++;
                segment++;
                check = false;
            }
        }
        else if (check && second - 1 < first - 1){
            right++;
            segment++;
            check = false;
        }
        else 
            right++;
    }

    if(segment == 1){
        cout << "yes" << endl
             << second << " " << first;
    }
    else 
        cout << "no";
}

   

    // int des_sortedArray[n];
    // for (int i = 0; i < n; i++)
    // {
    //     des_sortedArray[i] = arr[i];
    // }
    // sort(des_sortedArray, des_sortedArray + n, greater<int>());
    // int count1=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(des_sortedArray[i] != arr[i]){
    //         break;
    //     }
    //     else
    //         count1++;
    // }
    // if(count1 == n) {
    //     cout << "yes" << endl
    //          << 1 << " " << n;
    //          return 0;
    // }

    // int count = 0, first = 0, second = 0;
    // for (long i = 0; i < n; i++)
    // {
    //     if (arr[i] != sortedArray[i])
    //     {
    //         count++;
    //         if (count == 1)
    //         {
    //             second = i;
    //         }
    //         else if (count == 2)
    //         {
    //             first = i;
    //         }
    //     }

    //     if (count > 2)
    //     {
    //         cout << "no";
    //         break;
    //     }
    // }
    // if (count == 2)
    // {
    //     cout << "yes" << endl
    //          << second+1 << " " << first+1;
    // }
    // else if(count == 0){
    //     cout << "yes" << endl
    //          << arr[first] << " " << arr[second];
    // }
