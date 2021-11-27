#include<bits/stdc++.h>
using namespace std;

int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r=start_up();
template <typename T>
T myTemplate(T x, T y)
{
    return x+y;
}
int main()
{
    int n;
    string type;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> type;
        if(type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            cout << myTemplate<int>(element1, element2)<<endl;
        }
        else if(type == "float")
        {
            float element1, element2;
            cin >> element1 >> element2;
            cout<<myTemplate<float>(element1, element2)<<endl;
        }
        else if(type == "string")
        {
            string element1,element2;
            cin >> element1 >> element2;
            cout<<myTemplate<string>(element1, element2)<<endl;
        }
    }
    return 0;
}