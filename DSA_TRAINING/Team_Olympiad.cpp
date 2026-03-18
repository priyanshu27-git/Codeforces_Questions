#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int skill1[5001], skill2[5001], skill3[5001];
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if(t == 1){
            skill1[count1++] = i;
        }
        else if (t == 2){
            skill2[count2++] = i; 
        }
        else if (t == 3){
            skill3[count3++] = i;
        }
    }

    int w = count1;
    if(count2 < w) w = count2;
    if(count3 < w) w = count3;

    cout << w << endl;
    for (int i = 0; i < w; i++)
    {
        cout << skill1[i] << " " << skill2[i] << " " << skill3[i] << " " << endl;
    }
    return 0;
}
    


 