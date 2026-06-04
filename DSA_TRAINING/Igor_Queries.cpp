#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    int n = s.length();
    int a[m][2];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    int solu[m];
    int index = 0;
    for (int i = 0; i < m; i++)
    {
        int l,r;
        int count = 0;
        l = a[i][0];
        r = a[i][1];
        while (l < r){
            if(l != r && s[l-1] == s[l]){
                count++;
            }
            else if(s[l-1] == s[l]){
                count++;
            }
            l++;
        }
        solu[index++] = count;
    }

    for (int i = 0; i < index; i++)
    {
        cout << solu[i] << endl;
    }
    
    return 0;
}