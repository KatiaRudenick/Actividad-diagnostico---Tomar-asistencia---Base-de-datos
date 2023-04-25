#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
using namespace std;

class Student 
{
    private:
    int identifier;
    string name;
    string surname;

    public:
    Student();
    virtual ~Student();

    void setIdentifier(int _identifier);
    int getIdentifier() const ; //const pq no se quiere modificar el resultado
    
    void setName(string _name);
    string getName() const ;

    void setSurname(string _surname);
    string getSurname() const ;
};

#endif