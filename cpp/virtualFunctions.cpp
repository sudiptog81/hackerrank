#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
        int age;
        char name[255];
    public:
        virtual void getdata();
        virtual void putdata();
};

void Person::getdata()
{
    cin >> name >> age;
    return;
}

void Person::putdata()
{
    cout << name << " "
         << age << endl;
    return;
}

class Professor: public Person
{
    private:
        int cur_id;
        int publications;
    public:
        static int count;
        Professor();
        void getdata();
        void putdata();
};

int Professor::count = 0;

Professor::Professor()
{
    age = 0;
    for (int i = 0; i < 255; i++)
        name[i] = '\0';
    publications = 0;
    cur_id = ++count;
}

void Professor::getdata()
{
    cin >> name
        >> age
        >> publications;
    return;
}

void Professor::putdata()
{
    cout << name << " "
         << age << " "
         << publications << " "
         << cur_id << endl;
    return;
}

class Student: public Person
{
    private:
        int cur_id;
        int marks[6];
    public:
        static int count;
        Student();
        void getdata();
        void putdata();  
};

int Student::count = 0;

Student::Student()
{
    age = 0;
    for (int i = 0; i < 255; i++)
        name[i] = '\0';
    for (int i = 0; i < 6; i++)
        marks[i] = 0;
    cur_id = ++count;
}

void Student::getdata()
{
    cin >> name >> age;
    for (int i = 0; i < 6; i++)
        cin >> marks[i];
    return;
}

void Student::putdata()
{
    cout << name << " "
         << age << " ";

    int sum = 0;
    for (int i = 0; i < 6; i++)
        sum += marks[i];
    
    cout << sum << " "
         << cur_id << endl;
    return;
}

int main()
{
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}