// object array
#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 5

class Student
{
    public:
        unsigned int s_id;
        string s_name;

        // member function
        void set(unsigned int id, string name, string phone);
        void info_data(unsigned int sl);
    private:
        string s_phone;
};

// set member func implementation
void Student::set(unsigned int id, string name, string phone)
{
    s_id = id;
    s_name = name;
    s_phone = phone;
}

// info func
void Student::info_data(unsigned int sl)
{
    cout << "===== Student Info ===== " << sl << endl;
    cout << "Student ID: " << s_id << endl;
    cout << "Student Name: " << s_name << endl;
    cout << "Student Phone: " << s_phone << endl;

    cout << "\n\n";
}

int main(void)
{
    Student *student[MAX_SIZE];
    unsigned int i, j;

    // now allocate the memory
    for(i = 0; i < MAX_SIZE; ++i)
    {
        student[i] = new (nothrow) Student();

        if(student[i] == nullptr)
        {
            cerr << "Error! Memory Allocation Failed for Student [" << i << "] " << endl;
            for(j = 0; j < i; ++j)
                delete student[j];

            return 1;
        }
    }

    // set data to object
    student[0]->set(101, "Muhammad", "01315");
    student[1]->set(102, "Mucha", "017242");

    // display all data
    for(i = 0; i < MAX_SIZE; i++)
        student[i]->info_data(i + 1);

    // free memory
    for(i = 0; i < MAX_SIZE; ++i)
        delete student[i];

    return 0;
}
