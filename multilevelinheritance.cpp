#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setNumber(int);
    void getNumber(void);
};
void Student ::setNumber(int r)
{
    roll_number = r;
}
void Student ::getNumber()
{
    cout << "The Roll Number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void Exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam ::getMarks(void)
{
    cout << "Roll number: " << roll_number <<endl;
    cout << "Marks in maths: " << maths <<endl;
    cout<< "Marks in physics: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        getMarks();
        cout << "Final Percentage : " << (maths + physics)/2<<"%" << endl;
    }
};

int main()
{
    Result john;
    john.setNumber(10);
    john.setMarks(78.5 , 90);
    john.display();

    return 0;
}