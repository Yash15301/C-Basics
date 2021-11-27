#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cassert>
using namespace std;

class student 
{
    public:
        int score[5];
        int calculateTotalScore()
        {
            int total=0;
            for(int i=0; i<5; i++)
            {
                total += score[i];
            }
            return total;
        }
        void input()
        {
            for(int i=0; i<5; i++)
            {
                cin >> score[i];
            }
        }
        
};

int main()
{
    int n;
    cin >> n;
    student *s = new student[n];
    for(int i=0; i<n; i++)
    {
        s[i].input();
    }
    int kristen_score=0;
    for(int i=0; i<5; i++)
    {
        kristen_score += s[0].score[i];
    }
    int count=0;
    for(int i=1; i<n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        {
            count++;
        }
    }
    cout << count << endl;
    cout << "kristen's total score: " <<s[0].calculateTotalScore();
    return 0;
}