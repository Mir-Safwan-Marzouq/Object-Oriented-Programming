#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(int roll, float cgpa)
{
    this->roll=roll;
    this->cgpa=cgpa;
}

void Student::print()
{
    cout<<"Roll of the student is: "<<roll<<endl;
    cout<<"His CGPA is: "<<cgpa<<endl;
}
