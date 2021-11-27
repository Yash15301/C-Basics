#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
struct student_details
{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main()
{
    student_details st;
    cout << "Enter age, fname, lname and standard";
    cin >>st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
}