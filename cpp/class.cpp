#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

class Student
{
public:
    // constructors
    Student()
    {
        set_age(0);
        set_standard(0);
        set_first_name("");
        set_last_name("");
    }
    Student(int i, int j, string k, string l)
    {
        set_age(i);
        set_standard(j);
        set_first_name(k);
        set_last_name(l);
    }

    // getters
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }

    // setters
    void set_age(int i)
    {
        age = i;
    }
    void set_standard(int i)
    {
        standard = i;
    }
    void set_first_name(string s)
    {
        first_name = s;
    }
    void set_last_name(string s)
    {
        last_name = s;
    }

    // to_string method
    string to_string()
    {
        return ::to_string(age) + ',' + first_name + ',' + last_name + ',' + ::to_string(standard);
    }

private:
    int age;
    int standard;
    string first_name;
    string last_name;
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
