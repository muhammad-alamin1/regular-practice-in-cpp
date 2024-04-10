// hierarchical inheritance
#include <iostream>

using namespace std;

class Info
{
    private:
        int id;
        int mark;
    public:
        void set_id();
        int get_id();
        void get_mark();
};

class Result : public Info
{
    private:
        string address;

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

void Info::get_mark(){
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
    s1.print();

    return 0;
}
