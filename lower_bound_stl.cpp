#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n, temp, q, q_temp;
    vector<int>::iterator query_index;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin >> q_temp;
        query_index = lower_bound(v.begin(), v.end(), q_temp);
        if(v[query_index-v.begin()] == q_temp)
        {
            cout << "Yes "<< query_index-v.begin()+1 << endl;
        }
        else
        {
            cout << "No " << query_index-v.begin()+1 << endl;
        }
    }
}