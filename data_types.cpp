#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf ("%d %lli %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d %lli %c %f %lf", a, b, c, d, e);
    printf("\n");
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n"<< e << endl;
    return 0;
}