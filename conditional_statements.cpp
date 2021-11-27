#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string numbers[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<10)
    {
        cout << numbers[n] << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }

}