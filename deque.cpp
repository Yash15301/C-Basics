#include<bits/stdc++.h>
using namespace std;

int find_max(deque<int> mydeque,int no_elements, int pairs)
{
    while(mydeque.size() >= pairs)
    {
        cout << *std::max_element(mydeque.begin(), mydeque.begin()+pairs) << " ";
        mydeque.pop_front();
    }
    cout << "\n";
    return 0;
}
int main()
{
    int t,temp;
    deque<int> mydeque;
    cout << "Enter number of test cases: ";
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int no_elements,pairs;
        cout << "Enter number of elements and pairs: ";
        cin >>  no_elements >> pairs;
        for(int i=0; i<no_elements; i++)
        {
            cin >> temp;
            mydeque.push_back(temp);
        }
        find_max(mydeque,no_elements,pairs);
        mydeque.clear();
    }

    return 0;
}