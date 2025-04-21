#include "School.h"
#include <iostream>
using namespace std;
School::School(string schoolName,string address,
               int studentNumber,int teacherNumber,
               int staffNumber,int courseNumber,
               int classroomNumber){

    this->schoolName = schoolName;
    this->address = address;
    this->studentNumber = studentNumber;
    this->teacherNumber = teacherNumber;
    this->staffNumber = staffNumber;
    this->courseNumber = courseNumber;
    this->classroomNumber = classroomNumber;

    studentNumber = 100;
    teacherNumber = 100;
    staffNumber = 100;
    courseNumber = 100;
    classroomNumber = 100;

    students=new Student[studentNumber];
    teachers=new Teacher[teacherNumber];
    staffMembers=new Staff[staffNumber];
    courses=new Course[courseNumber];
    classrooms=new Classroom[classroomNumber];

    studentCounter=0;
    teacherCounter=0;
    staffCounter=0;
    classRoomCounter=0;
    courseCounter=0;
}

School::~School()
{
    //dtor
}

void School::addStudent(Student student)
{
    if (studentCounter == studentNumber) {
        cout << "The Students In School Are Full" << endl;
    } else {
        students[studentCounter] = student;
          cout << "Added Student #" << studentCounter + 1 << ": " << student.getName() << endl;
        studentCounter++;
    }
}
void School::addTeacher(Teacher teacher)
{
    if (teacherCounter == teacherNumber) {
        cout << "The Teacher In School Is Completed" << endl;
    } else {
        teachers[teacherCounter] = teacher;
        teacherCounter++;
    }
}

 void School::addStaff(Staff staff)
{
    if (staffCounter == staffNumber) {
        cout << "The Staff Members In School Are Full" << endl;
    } else {
        staffMembers[staffCounter] = staff;
        staffCounter++;
    }
}
void School::addClassRoom(Classroom classroom)
{
    if (classRoomCounter == classroomNumber) {
        cout << "The Classrooms In School Are Full" << endl;
    } else {
        classrooms[classRoomCounter] = classroom;
        classRoomCounter++;
    }
}
void School::addCourse(Course course)
{
    if (courseCounter == courseNumber) {
        cout << "The Courses In School Are Full" << endl;
    } else {
        courses[courseCounter] = course;
        courseCounter++;
    }
}
void School::setSchoolName(string schoolName)
 {
     this->schoolName=schoolName;
 }
 void School::setAddress(string address)
 {
     this->address=address;
 }
 string School::getSchoolName()
 {
     return schoolName;
 }
 string School::getAddress()
 {
     return address;
 }
 School::School(string schoolName,string address)
 {
       this->schoolName = schoolName;
       this->address = address;

    studentNumber = 100;
    teacherNumber = 100;
    staffNumber = 100;
    courseNumber = 100;
    classroomNumber = 100;

    students = new Student[studentNumber];
    teachers = new Teacher[teacherNumber];
    staffMembers = new Staff[staffNumber];
    courses = new Course[courseNumber];
    classrooms = new Classroom[classroomNumber];
     studentCounter=0;
     teacherCounter=0;
     classRoomCounter=0;
     staffCounter=0;
     courseCounter=0;
 }
 void School::print()
 {
     cout<<"The School Name is : "<<schoolName<<endl;
     cout<<"The Address is : "<<address<<endl<<endl;
 }
 void School::input(string schoolName,string address)
 {
     this->schoolName=schoolName;
     this->address=address;
 }
 void School::studentsInformation()
 {

     for(int i=0; i<studentCounter; i++)
     {
         cout<<"The Student Number : "<<i+1<<" is : "<<endl;
         students[i].print();
         cout<<endl<<endl;
     }
 }
