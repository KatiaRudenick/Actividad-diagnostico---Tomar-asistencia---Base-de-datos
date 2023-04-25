#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>
#include <string>
using namespace std;

class Course 
{
    private:
    string subject;

    public:
    Course();
    virtual ~Course();
    
    void setSubject(string _subject);
    string getSubject() const ;

};

#endif