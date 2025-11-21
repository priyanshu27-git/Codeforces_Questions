#include <iostream>
using namespace std;
int main() 
{
    int N,days=0;
    float years=0,months=0;
    cin >> N;
    if(N >= 365){
    years = N / 365;
    N = N - (years * 365);
    }
    if (N <= 365)
    {
        months = N / 30;
        N = N - (months * 30);
    }
    if(N <= 30)
    days = N;

    cout << years << " years\n" << months << " months\n" << days << " days";
    return 0;
}