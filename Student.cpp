#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no,char name[]) {
  studentID=no;
  strcpy(studentName,name);
}

// Display StudentId and Name
void Student::display() {
  cout<<"____________________"<<endl;
  cout<<"The Student ID:"<<studentID<<endl;
  cout<<"The name if the student:"<<studentName<<endl;
};
