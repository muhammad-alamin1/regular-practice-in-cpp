// copy constructor
#include <iostream>
using namespace std;

class Student
{
    private:
        int a, b;
    public:
        Student();
        Student(int a, int b);
        Student(const Student &obj);
        void display();
};

Student::Student(){
    this->a = 0;
    this->b = 0;
}

Student::Student(int a, int b){
    this->a = a;
    this->b = b;
}

// copy constructor
Student::Student(const Student &obj){
    cout << "copy constructor.!" << endl;
    this->a = obj.a;
    this->b = obj.b;
}

void Student::display()
{
    cout << "a = " << this->a << endl;
    cout << "b = " << this->b << endl << endl;
}

int main(void)
{
    Student s1;
    s1.display();

    Student s2(5, 6);
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}
