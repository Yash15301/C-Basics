#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        A()
        {
            callA=0;
        }
    private:
        int callA;
        void inc()
        {
            callA++;
        }
    protected:
        void func(int & a)
        {
            a=a*2;
            inc();
        }
    public:
        int getA()
        {
            return callA;
        }
};

class B : public A
{
    public:
        B()
        {
            callB = 0;
        }
    private:
        int callB;
        void inc()
        {
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a*3;
            inc();
        }
    public:
        int getB()
        {
            return callB;
        }
};

class C : public B
{
    public:
        C()
        {
            callC = 0;
        }
    private:
        int callC;
        void inc()
        {
            callC++;
        }
    protected:
        void func(int & a)
        {
            a=a*5;
            inc();
        }
    public:
        int getC()
        {
            return callC;
        }
};

class D : public C
{
    int val;
    public:
        D()
        {
            val=1;
        }

        void update_val(int new_val)
        {
            int a = new_val;
            while(a%2 == 0)
            {
                a = a/2;
                A::func(val);
            }
            while(a%3 == 0)
            {
                a =a/3;
                B::func(val);
            }
            while(a%5 == 0)
            {
                a = a/5;
                C::func(val);
            }
        }

        void check(int);
};

void D:: check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func is called " << getA() << " times " << endl << "B's func is called " << getB() << " times " << endl << "C's func is called " << getC() << " times " << endl;
}
int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
    return 0;
}