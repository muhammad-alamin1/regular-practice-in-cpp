// public mode inheritance
#include <iostream>

using namespace std;

// base class
class Student
{
    public:
        int roll;
        string name;
};

// derived class
class Result: public Student
{
    public:
        void set(){
            cout << "Enter Your Roll & Name: ";
            cin >> roll >> name;
        }
        void print(){
            cout << "Roll & Name are: " << roll << " " << name << endl;
        }
};

/*
    public mode
    class Result{
        public:
            int roll;
            string name;
            void set();
            void print();
    }
*/

int main(void)
{
    Result s1;

    s1.roll = 101;
    s1.name = "Muhammad Al-Amin";

    // cout << "Roll & Name are: " << s1.roll << " " << s1.name << endl;
    s1.set();
    s1.print();

    return 0;
}


