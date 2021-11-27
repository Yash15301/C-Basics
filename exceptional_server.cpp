#include<iostream>
#include<exception>
#include<string>
#include<stdexcept>
#include<vector>
#include<cmath>
using namespace std;

class Server
{
    private:
        static int load;
    public:
        static int compute(long long a, long long b)
        {
            load += 1;
            if(a<0)
            {
                throw std::invalid_argument("A is negative");
            }
            vector<int> v(a,0);
            int real = -1, cmplx = sqrt(-1);
            if(b==0) throw 0;
            real = (a/b)*real;
            int ans = v.at(b);
            return real +a-b*ans;
        }
        static int getLoad()
        {
            return load;
        }
};
int Server::load = 0;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long a,b;
        cin >> a >> b;
        try
        {
            cout << Server::compute(a,b) << endl;
        }
        catch(bad_alloc& error)
        {
            cout << "Not enough memory" << endl;
        }
        catch(exception& error)
        {
            cout << "Exception: " << error.what() << endl;
        }
        catch(...)
        {
            cout << "Other exception" << endl;
        }
    }
    cout << Server::getLoad() << endl;
    return 0;
}