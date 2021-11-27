#include<bits/stdc++.h>
using namespace std;

int main()
{
    float A,B,C;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> A >> B >> C;
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part
        return 0;
    }
}