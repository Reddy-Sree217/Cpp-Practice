#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setRoll(int);
    void getRoll(void);
};

void Student::setRoll(int r)
{
    roll_number = r;
}

void Student::getRoll(void)
{
    cout << roll_number;
}

class Exam : public Student
{
protected:
    float math_marks;
    float chem_marks;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float m, float c)
{
    math_marks = m;
    chem_marks = c;
}
void Exam::getMarks(void)
{
    cout << "Marks in math Exam is " << math_marks << endl;
    cout << "Marks in chem Exam is " << chem_marks << endl;
}

class Marks : public Exam
{
    float percentage = 0;

public:
    void display(void);
};

void Marks::display(void)
{
    percentage = math_marks * 100 / 75;
    cout << endl;
    cout << "Percentage in maths exam of roll " << roll_number << " is: " << percentage << endl;
    percentage = chem_marks * 100 / 60;
    cout << "Percentage in chem exam  of roll " << roll_number << " is: " << percentage << endl;
    cout << endl;
}

int main()
{
    Marks stud1;
    stud1.setRoll(217);
    stud1.setMarks(74, 55);
    stud1.getMarks();
    stud1.display();

    return 0;
}