// inline function
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Student
{
    public:
        int id;
        string name;
        char name1[20];

        void show_data();
};

inline void Student::show_data()
{
    cout << "Student ID & Name: " << id << "\t" << name << endl;
}

int main(void)
{
    Student s;

    s.id = 101;
    s.name = "Muhammad Amin";
    // strcpy(s.name1, "Muhammad Al-Amin");

    s.show_data();

    return 0;
}
