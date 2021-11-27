#include<sstream>
#include<vector>
#include<iostream>
using namespace std;

int make_string_stream(string s)
{
    stringstream ss(s);
    vector<int> result;
    char ch;
    int temp;
    while (ss>>temp)
    {
        result.push_back(temp);
        ss>>ch;
    }
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i]<<endl;
    }
}
int main()
{
    string s;
    cin >> s; 
    make_string_stream(s);
    return 0;
}