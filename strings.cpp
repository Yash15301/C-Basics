#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    cout << "enter string: ";
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    char c1=b[0],c2=a[0];
    char ch =a[0];
    a[0]=b[0];
    b[0]=ch;
    cout << a << " " << b;
    return 0;
}