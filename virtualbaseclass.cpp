#include <iostream>
using namespace std;
class Student
{
     protected:
        int roll_no;
    public:
        void set_number(int a ){
            roll_no = a;

        }
        void printNumber(){
            cout<<"Your Roll number is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
    int maths,physics;
    public:
    void setMarks(float m1 , float m2){
        maths = m1;
        physics = m2;
    }
    void printMarks(){
        cout<<"Marks obtained are"<<endl;
        cout<<"Maths: "<<maths<<endl;
        cout<<"Physics: "<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected: 
    float score;
    public:
    void setScore(float s1){
        score = s1;
    }
    void printScore(){
        cout<<"Your Score in Sports is "<<score<<endl;

    }
};

class Result : public Test , public Sports{
    private :
    float total;
    public:
    void display(void){
        total = (maths + physics+ score) / 3;
        printNumber();
        printMarks();
        printScore();
        cout<<"Final Result : "<<total<<"%"<<   endl;


    }
};
int main()
{
    Result john;
    john.set_number(10);
    john.setMarks(98,82);
    john.setScore(77);
    john.display();

    return 0;
}