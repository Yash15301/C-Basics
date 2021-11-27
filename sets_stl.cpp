#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,x;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++)
    {
        cin >> q >> x;
        if(q == 1)
        {
            s.insert(x);
        }
        else if(q == 2)
        {
            s.erase(x);
        }
        else if(q == 3)
        {
            set<int>::iterator itr=s.find(x);
            if(itr == s.end())
            {
               cout << "No" << endl; 
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}