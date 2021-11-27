#include<cmath>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,query,marks,temp_marks;
    string name;
    map<string, int> m;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> query;
        if(query == 1)
        {
            cin >> name >> marks;
            if(m.find(name) != m.end())
            {
                map<string, int>::iterator itr=m.find(name);
                temp_marks = itr->second;
                m.erase(name);
                m.insert(make_pair(name ,temp_marks+marks));
            }
            else
            {
                m.insert(make_pair(name, marks));
            }
        }
        else if(query == 2)
        {
            cin >> name;
            m.erase(name);
        }
        else
        {
            cin >> name ;
            map<string, int>::iterator itr=m.find(name);
            if(itr == m.end())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << itr->second << endl;
            }
        }
    }
    return 0;
}