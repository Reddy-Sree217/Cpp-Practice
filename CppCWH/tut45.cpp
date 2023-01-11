#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int);
    void printRoll(void);
};

void Student::setRoll(int roll)
{
    this->roll = roll;
}

void Student::printRoll(void)
{
    cout << "Your roll number is: " << roll << endl<<endl;
}

class Test : virtual public Student
{
protected:
    float maths = 0;
    float physics = 0;

public:
    void setMarks(float, float);
    void printtMarks(void);
};

void Test::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Test::printtMarks(void)
{
    cout << "Your marks in " << endl
         << "maths is: " << maths << endl
         << "physics is: " << physics << endl<<endl;
}

class Sports : virtual public Student
{
protected:
    float score = 0;

public:
    void setScore(float);
    void printScore(void);
};

void Sports::setScore(float sc)
{
    score = sc;
}

void Sports::printScore(void)
{
    cout << "Your score in " << endl
         << "sports is: " << score << endl<<endl;
}

class Result:public Test,public Sports{
    private:
    float total=0;
    public:
    void display(void);
};

void Result::display(void){
    total = maths+physics+score;
    printRoll();
    printtMarks();
    printScore();
    cout<<"Total is: "<<total<<endl;
}


int main()
{
    Result stud1;
    stud1.setRoll(217);
    stud1.setMarks(99.3,95.2);
    stud1.setScore(98.5);
    stud1.display();
    return 0;
}