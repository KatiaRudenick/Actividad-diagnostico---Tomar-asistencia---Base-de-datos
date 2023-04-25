#ifndef ATTENDANCEMANAGEMENT_HPP
#define ATTENDANCEMANAGEMENT_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <Student.hpp>
#include <Course.hpp>

using namespace std;

class AttendanceManagement 
{
    private:
    
    public:
    AttendanceManagement();
    virtual ~AttendanceManagement();

//En el parametro el student es un objeto de tipo puntero student, el course es un obj de tipo puntero course
    void takeAttendance(Student* student, Course* course, string datetime, bool state);
    void showAttendance();
    
};

#endif