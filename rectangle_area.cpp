#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
        int width,height;
        void display()
        {
            cout << width << " " << height <<endl;
        }
};
class RectangleArea: public Rectangle
{
    public:
        void read_input()
        {
            cin >> width >> height;
        }
        void display()
        {
            cout << width*height << endl;
        }
};
int main()
{
    RectangleArea r;
    r.read_input();
    r.Rectangle::display();
    r.display();
    return 0;
}