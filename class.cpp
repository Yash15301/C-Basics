#include<iostream>
#include<sstream>
using namespace std;

class student 
{
    public:
       
        int age;
        int standard;
        string first_name,last_name;
        
        void set_age(int new_age)
        {
            age = new_age;
        }
        void set_standard(int new_standard)
        {
            standard = new_standard;
        }
        void set_first_name(string new_fname)
        {
            first_name = new_fname;
        }
        void set_last_name( string new_lname)
        {
            last_name = new_lname;
        }
        int get_age(){return age;}
        int get_standard(){return standard;}
        string get_first_name(){return first_name;}
        string get_last_name(){return last_name;}
        string to_string()
        {
            stringstream ss;
            char ch = ',';
            ss << age << ch << first_name << ch << last_name << ch << standard;
            return ss.str();
        }
};
int main()
{
    int age,standard;
    string fname,lname;
    cin >> age >> fname >> lname >> standard;
    student st;
    st.set_age(age);
    st.set_first_name(fname);
    st.set_last_name(lname);
    st.set_standard(standard);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << endl;
    cout << "\n";
    cout << st.to_string();
    return 0;
}
