#ifndef SCHOOL_H
#define SCHOOL_H
#include <string>
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Classroom.h"
#include <iostream>
using namespace std;

class School
{
private:
    string schoolName;
    string address;
    Student* students;
    Teacher* teachers;
    Staff* staffMembers;
    Course* courses;
    Classroom* classrooms;
    int studentNumber;
    int teacherNumber;
    int staffNumber;
    int courseNumber;
    int classroomNumber;

    int studentCounter;
    int teacherCounter;
    int staffCounter;
    int courseCounter;
    int classRoomCounter;
public:
    void addStudent(Student student);
    void addTeacher(Teacher teacher);
    void addStaff(Staff staff);
    void addCourse(Course course);
    void addClassRoom(Classroom classroom);
    void setSchoolName(string schoolName);
    void setAddress(string address);
    string getSchoolName();
    string getAddress();
    School(string schoolName, string address,
           int studentNumber, int teacherNumber,
           int staffNumber, int courseNumber,
           int classroomNumber);
    School(string schoolName,string address);
    void print();
    void studentsInformation();
    void input(string schoolName,string address);
    virtual ~School();

};

#endif // SCHOOL_H
