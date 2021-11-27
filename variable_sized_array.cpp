#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,size,value,which,index;
    cout << "Enter p and q values";
    cin >> n >> q;
    vector<vector<int>> a;
    for(int i=0; i<n; i++)
    {
        cout << "Enter size";
        cin >> size;
        vector<int> b;
        cout << "Enter values";
        for(int j=0; j<size; j++)
        {
            cin >> value;
            b.push_back(value);

        }
        a.push_back(b);
    }
    for(int k=0; k<q; k++)
    {
        cout << "Enter row and index";
        cin >> which >> index;
        cout << a[which][index] << endl;
    }
    return 0;
}