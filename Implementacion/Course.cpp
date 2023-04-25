#include <Course.hpp>

#include <iostream>
using namespace std;

Course::Course(){};
Course::~Course(){};


string Course::getSubject() const{
    return subject;
}

void Course::setSubject(string _subject){
subject = _subject;
}

