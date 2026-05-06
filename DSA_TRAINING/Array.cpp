#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool checkneg = false;
    bool checkpos = false;

    int neg_set[n];
    int pos_set[n];
    int zero_set[n];

    int c1 = 0;
    int c2 = 0;

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && !checkneg)
        { // negative set
            neg_set[0] = a[i];
            checkneg = true;
            c1++;
        }
        else
        { // positive set
            if (a[i] > 0 && !checkpos)
            {
                if (c2 == 1)
                {
                    zero_set[k++] = pos_set[0];
                    pos_set[0] = a[i];
                    checkpos = true;
                    continue;
                }
                pos_set[0] = a[i];
                c2++;
                checkpos = true;
            }
            else if (a[i] < 0 && !checkpos)
            {
                if (c2 == 1)
                {
                    pos_set[1] = a[i];
                    checkpos = true;
                    c2++;
                    continue;
                }
                pos_set[0] = a[i];
                c2++;
            }
            else // Zero set
            {
                zero_set[k++] = a[i];
            }
        }
    }

    cout << c1 << " " << neg_set[0] << endl;

    if (c2 < 2)
        cout << c2 << " " << pos_set[0] << endl;
    else
        cout << c2 << " " << pos_set[0] << " " << pos_set[1] << endl;

    cout << k << " ";

    for (int i = 0; i < k; i++)
    {
        cout << zero_set[i] << " ";
    }

    return 0;
}