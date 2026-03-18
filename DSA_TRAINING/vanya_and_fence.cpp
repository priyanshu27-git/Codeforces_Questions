#include <iostream>
using namespace std;

int main() {
    int n,h;
    cin >> n >> h;

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int pheight;
        cin >> pheight;
        if(pheight > h){
            total +=2;
        }
        else {
            total +=1;
        }
    }
    cout << total;
    return 0;
}