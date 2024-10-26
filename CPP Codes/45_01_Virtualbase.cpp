#include <iostream>
using namespace std;
// Use of Virtual
//  Student-->Test
//  Student-->Sports
//  Test-->Result
//  Sports-->Result
class Student
{
protected:
    int RollNo;

public:
    void setrollno(int a)
    {
        RollNo = a;
    }
    void showRollNo()
    {
        cout << "Your Roll No is " << RollNo << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void show_marks(void)
    {
        cout << "Your marks in " << endl
             << "1.Maths " << maths << endl
             << "2.Physics " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void setmarks(int a)
    {
        score = a;
    }
    void showmarks()
    {
        cout << "Your PT Score is marks " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void Display(void)
    {
        total = maths + physics + score;
        showRollNo();
        show_marks();
        showmarks();
        cout<<"Your Total Score is "<<total<<endl;
    }
};
int main()
{
Result Rohit;
Rohit.set_marks(97.0,99.0);
Rohit.setmarks(99);
Rohit.setrollno(10660);
Rohit.Display();
    return 0;
}