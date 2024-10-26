#include <iostream>
using namespace std;
/*
Notes:
If we are inheriting B from A and C from B: [ A--->B--->C]
1. A is the base class for B and B is the base class for C
2. A>B>C is called Inheritance Path
*/
class Student
{
protected:
    int roll_number;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};

void Student ::set_roll_num(int r)
{
    roll_number = r;
}
void Student ::get_roll_num()
{
    cout << "The Roll Number is " << roll_number << endl;
}

class Exam : public Student
{ // Publically inherate student
protected:
    float Maths;
    float Physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam ::set_marks(float m1, float m2)
{
    Maths = m1;
    Physics = m2;
}
void Exam ::get_marks()
{
    cout << "Maths Mark is " << Maths << endl;
    cout << "Physics Mark is " << Physics << endl;
}

class Result : public Exam
{ // Multiple Inheretance
    float percentage;

public:
    void Display()
    {
        get_roll_num();
        get_marks();
        cout << "Your Percentage is " << (Maths + Physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result Rohit;
    Rohit.set_roll_num(24);
    Rohit.set_marks(99.95, 99.998);
    Rohit.Display();
    return 0;
}