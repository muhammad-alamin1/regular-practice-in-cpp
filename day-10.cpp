// Access Modifier --> public, private, protected
#include <iostream>
#include <string>

using namespace std;

// student class
class Student
{
    public:
        int id;
        string name;
        string address;

        // member function
        void show_data();
        void set_data(string phone);
    private:
        string phone_number;

};

void Student::show_data()
{
    cout << "ID: " << id << " Name: " << name << " Address: " << address << " Phone: " << phone_number << endl;
}

void Student::set_data(string phone)
{
    phone_number = phone;
}

int main(void)
{
    Student s;
    string p;

    s.id = 101;
    s.name = "Muhammad Al-Amin";
    s.address = "Betmore, Mathbaria.";
    // s.phone_number = "01315792303";  // private error

    p = "01315792303";
    s.set_data(p);

    s.show_data();

    return 0;
}
