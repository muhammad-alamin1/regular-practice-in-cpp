// hybrid inheritance
#include <iostream>

using namespace std;

class Info
{
    private:
        int id;
    public:
        int get_id(){
            cout << "Enter Student ID: ";
            cin >> id;

            return id;
        }
};

class Lab
{
    int l_mark;
    public:
        int get_l_mark(){
            cout << "Lab Marks: ";
            cin >> l_mark;

            return l_mark;
        }
};

// single inheritance
class Exam : public Lab
{
    int mark;
    public:
        int get_mark(){
            cout << "\nOther Marks: ";
            cin >> mark;

            return mark + get_l_mark();
        }
};

// hybrid inheritance
class Result: private Info, private Exam
{
    private:
        int s_id, total_marks;
    public:
        void get_res(){
            s_id = get_id();
            total_marks = get_mark();

            cout << "Student ID: " << s_id << ", Total Marks: " << total_marks << endl;
        }
};

int main(void)
{
    Result s1;

    s1.get_res();

    return 0;
}
