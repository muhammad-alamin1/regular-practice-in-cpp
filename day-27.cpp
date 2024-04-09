// single inheritance
#include <iostream>

using namespace std;

class Info
{
    private:
        int id;
    public:
        void set_id();
        int get_id();
};

class Student: public Info
{
    public:
        void print();
};

void Info::set_id(){
    cout << "Enter ID: ";
    cin >> id;
}

int Info::get_id(){
    return id;
}

void Student::print(){
    cout << "ID is: " << get_id() << endl;
}

int main(void)
{
    Student s1;

    s1.set_id();
    s1.print();

    return 0;
}
