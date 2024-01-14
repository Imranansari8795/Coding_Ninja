
// #include <iostream>
// using namespace std;

// class Shape{
//     public :
//     int height;
//     int width;
// };

// int main() {
//     Shape *s = new Shape();
//     s -> height = 1;
//     cout << s -> height;
// }

#include <iostream>
using namespace std;

class Student
{
    int rollNo;
public:
    char name;

    Student()
    {

    }
    Student(int num, string pas)
    {
        if (pas == "123")
        {
            rollNo = num;
        }
    }

    void print()
    {
        cout << name << " " << rollNo;
    }
};

int main() {
    Student *s = new Student();
    s -> name = 'A';
    // s -> rollNo = 15;
    s -> print();
}
