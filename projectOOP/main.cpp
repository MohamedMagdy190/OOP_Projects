#include <Person.h>
#include <Student.h>
#include <School.h>
#include <iostream>
using namespace std;

int main()
{
    School s("AbdulAzizIssaAl-Saidi","Menoufia", 100, 100, 100, 100, 100);
    s.print();
    Student p("Magdy",16,"male","Menoufia","01045789642","Magdy18@gmail.com",1,2.5,"Good");
    s.addStudent(p);
    Student p2("Mohamed",17,"male","Menoufia","01046465142","Mohamed19@gmail.com",2,2.9,"Very good");
    s.addStudent(p2);
    Student p3("Ahmed",18,"male","Menoufia","01023478915","Ahmed967@gmail.com",3,3.5,"Excellence");
    s.addStudent(p3);
    Student p4("Fatima",19,"female","Menoufia","10062934356","Fatima@gmail.com",4,3.9,"Excellence");
    s.addStudent(p4);

    s.studentsInformation();

    return 0;
}
