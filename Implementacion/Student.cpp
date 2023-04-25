#include <Student.hpp>

#include <iostream>
using namespace std;

Student::Student(){};
Student::~Student(){};

int Student::getIdentifier() const{
    return identifier;
}

void Student::setIdentifier(int _identifier){
identifier = _identifier;
}


string Student::getName() const{
    return name;
}

void Student::setName(string _name){
name = _name;
}

void Student::setSurname(string _surname){
surname = _surname;
}

string Student::getSurname() const{
    return surname;
}



