#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0, right = n-1;
    bool sereja = true;
    int s = 0, d = 0;

    while(left != right){
        if (a[right] > a[left])
        {
            if (sereja)
            {
                s += a[right--];
                sereja = false;
            }
            else
            {
                d += a[right--];
                sereja = true;
            }
        }
        else
        {
            if (sereja)
            {
                s += a[left++];
                sereja = false;
            }
            else
            {
                d += a[left++];
                sereja = true;
            }
        }
        if (left == right)
        {
            if (sereja)
            {
                s += a[left];
            }
            else
            {
                d += a[left];
            }
        }
    }
    if(n == 1)
    cout << a[0] << " " << 0;
    else
    cout << s << " " << d;
    
    return 0;
}