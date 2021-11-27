#include<bits/stdc++.h>
using namespace std;

class Triangle
{
    public:
        void display()
        {
            cout << "I am a triangle" << endl;
        }
};
class IsoscelesTriangle:public Triangle
{
    public:
        void display()
        {
            cout << "I am an isosceles triangle" << endl;
        }
};

class EquilateralTriangle:public IsoscelesTriangle
{
    public:
        void display()
        {
            cout << "I am an equilateral triangle" << endl;
        }
};
int main()
{
    EquilateralTriangle eq;
    eq.display();
    eq.IsoscelesTriangle::display();
    eq.Triangle::display();
    return 0;
}