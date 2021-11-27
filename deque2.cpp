#include<bits/stdc++.h>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    deque<int> mydeque;
    int i;
    
    for(i=0; i<k; i++)
    {
        while(!mydeque.empty() && arr[i]>=arr[mydeque.back()])
        {
            mydeque.pop_back();
        }
        mydeque.push_back(i);
    }
    
    for(i=k; i<n; i++)
    {
        cout<<arr[mydeque.front()]<<" ";
        
        while(!mydeque.empty() && mydeque.front()<=i-k)
        {
            mydeque.pop_front();
        }
        while(!mydeque.empty() && arr[i]>=arr[mydeque.back()])
        {
            mydeque.pop_back();
        }
        mydeque.push_back(i);
        
    }
    cout<<arr[mydeque.front()]<<endl;
}

int main()
{

   int t;
   scanf("%d",&t);
   while(t--) 
   {
      int n,k;
      cin>>n>>k;
       int i;
      int * arr=new int [n];
       for(i=0;i<n;i++)
           cin>>arr[i];
       printKMax(arr, n, k);
       
     }
     return 0;
}
