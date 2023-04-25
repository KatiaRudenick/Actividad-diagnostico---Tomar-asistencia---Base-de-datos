#include <iostream>
#include <AttendanceManagement.hpp>
#include <Student.hpp>
#include <Course.hpp>

using namespace std;

int main()
{
    Student* student = new Student();
     cout << endl;
    student->setIdentifier(1);
    student->setName("Gigi");
    student->setSurname("Hadid");

    Course* course = new Course();
    course->setSubject("Modelaje");
     cout << endl;

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2023-04-24", true);
    cout << endl;

    attendanceManagement->showAttendance();

    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}