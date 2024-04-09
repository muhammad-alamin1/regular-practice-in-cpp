// multiple inheritance
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

class Result
{
    private:
        int mark;
    public:
        void get_mark();
};

class Student: public Info, private Result
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

void Result::get_mark(){
    cout << "Enter Mark: ";
    cin >> mark;
    cout << "Marks Is: " << mark << endl;
}

void Student::print(){
    cout << "ID is: " << get_id() << endl;
    get_mark();
}

int main(void)
{
    Student s1;

    s1.set_id();
    // s1.get_mark();
    s1.print();

    return 0;
}

