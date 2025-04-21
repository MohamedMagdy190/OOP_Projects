#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using std::string;
using std::cout;
using std::endl;


class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    void setRoomNumber(int roomNumber);
    void setCapacity(int capacity);
    int getRoomNumber();
    int getCapacity();
    void input(int roomNumber,int capacity);
    void print();
    Classroom();
    Classroom(int roomNumber,int capacity);
    virtual ~Classroom();

};

#endif // CLASSROOM_H
