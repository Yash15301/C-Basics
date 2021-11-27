#include<stdio.h>
#include<iostream>
using namespace std;

void pointer(int *a, int *b)
{
    cout << *a + *b << endl;
    cout << abs(*a - *b) << endl;
}
int main()
{
    int a,b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    pointer(pa,pb);
    return 0;
}