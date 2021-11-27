#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node* next;
    Node* prev;
    int key,value;
    Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
    Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class LRUCache
{
    int cp;
    map<int, list<pair<int, int>>::iterator> mp;
    list<pair<int, int>> lru;
    public:
        LRUCache(int capacity): cp(capacity){}
        void set(int key, int val)
        {
            if(mp.find(key) != mp.end())
            {
                mp[key]->first = key;
                mp[key]->second = val;
            }
            else
            {
                lru.push_front({key, val});
                mp[key] = lru.begin();
                if(lru.size() > cp)
                {
                    mp.erase(lru.back().first);
                    lru.pop_back();
                }
            }
        }
        int get(int key)
        {
            if(mp.find(key) != mp.end())
            {
                lru.push_front(*mp[key]);
                lru.erase(mp[key]);
                mp[key] = lru.begin();
                return mp[key]->second;
            }
            else
                return -1;
        }
};
class Cache
{
    protected:
        map<int,Node*> mp;
        int cp;
        Node* tail;
        Node* head;
        virtual void set(int, int)=0;
        virtual int get(int) =0;
};
int main()
{
    int n,capacity;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for(int i=0; i<n; i++)
    {
        string command;
        cin >> command;
        if(command=="get")
        {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if(command == "set")
        {
            int key, value;
            cin >> key >> value;
            l.set(key, value);
        }
    }
    return 0;
}