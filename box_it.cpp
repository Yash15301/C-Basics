#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Box
{
    private:
        int l,b,h;
    public:
        Box ()
        {
            l=0;
            b=0;
            h=0;
        }
        Box(int length, int breadth, int height)
        {
            l=length;
            b=breadth;
            h=height;
        }
        Box(const Box& B)
        {
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength()
        {
            return l;
        }
        int getBreadth()
        {
            return b;
        }
        int getheight()
        {
            return h;
        }
        long long CalculateVolume()
        {
            return (long long)l*b*h;
        }
        friend bool operator < (Box&A,Box&B)
        {
            if((A.l < B.l) || (A.b < B.b) &&(A.l==B.l) | ((A.h<B.h) && (A.l == B.l) && (A.b == B.b)))
            {
                return true;
            }
            else
            {
                return false;
            }
        };
         friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }

};

int main()
{
    Box b1;
    Box b2(2, 3, 4);
    cout << b2.getLength() << endl;
    cout << b2.getBreadth() << endl;
    cout << b2.getheight() << endl;
    cout <<b2.CalculateVolume() << endl;
    bool x = (b1 < b2);
    cout << x << endl;
    cout <<b2;
    return 0;
}