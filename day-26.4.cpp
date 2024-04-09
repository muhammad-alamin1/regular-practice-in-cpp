// private member inheritance public mode
// there is no way private member inheritance in any mode like public, private, protected
#include <iostream>

using namespace std;

// base class
class Student
{
    private:
        int roll;
        string name;

    public:
        // by pass way, we access private member in another class
        void set(){
            cout << "Enter Your Roll & Name: ";
            cin >> roll >> name;
        }
        void print(){
            cout << "Roll & Name are: " << roll << " " << name << endl;
        }
};

// derived class
class Result: public Student
{
    public:
        void all(){
            set();
            print();
        }
};0


int main(void)
{
    Result s1;

    // s1.set();
    // s1.print();
    s1.all();

    return 0;
}
