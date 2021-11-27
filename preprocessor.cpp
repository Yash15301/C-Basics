#include<bits/stdc++.h>
using namespace std;
#define add(a,b) abs(a-b) 

int main()
{
    int n,temp;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        array[i] = temp;
    }
    sort(array,array+n);
    int result = add(array[0],array[n-1]);
    cout << result << endl;
    return 0;
}