#include<cmath>
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,remove,start,end;
    long long temp;
    vector<long long> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> remove;
    cin >> start >> end;
    v.erase(v.begin()+start-1, v.begin()+end);
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
