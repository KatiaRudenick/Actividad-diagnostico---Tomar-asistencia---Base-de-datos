#include <AttendanceManagement.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

AttendanceManagement::AttendanceManagement(){};
AttendanceManagement::~AttendanceManagement(){};

void AttendanceManagement::takeAttendance(Student *student, Course* course, string datetime, bool state)
{
    ifstream testOpenFile("attendance.csv");
    bool fileExist = testOpenFile.good();
    testOpenFile.close(); 

    ofstream csvFile;
    csvFile.open("attendance.csv", ofstream::app); //modificador app permite agregar los titulos si no existen en el archivo
    if(!fileExist){
        csvFile << "Id del estudiante,"
        <<" Nombre/s,"
        <<"Apellido/s,"
        << "Materia,"
        <<"Fecha y hora,"
        <<"Presente," ;
    }

    csvFile << endl <<student->getIdentifier()<< " "
    <<student ->getName()<< ","
    <<student ->getSurname()<<","
    <<course ->getSubject()<<","
    <<datetime << ","
    <<state <<",";

    csvFile.close();

}

void AttendanceManagement::showAttendance()
{
    ifstream csvFile("attendance.csv");
    string row;
    char delimiter = ',';
    getline(csvFile, row); // se lee la primer linea para descartarla

    while (getline(csvFile, row)){
        stringstream stream(row); // Convertir la cadena a un stream
        string idStudent, name, surname, subject, daytime, state;

        // Extraer todos los valores de esa fila
        getline(stream, idStudent, delimiter);
        getline(stream, name, delimiter);
        getline(stream, surname, delimiter);
        getline(stream, subject, delimiter);
        getline(stream, daytime, delimiter);
        getline(stream, state, delimiter);

        cout << "==================" << endl;
        cout << "Id estudiante: " << idStudent << endl;
        cout << "Nombre/s: " << name << endl;
        cout << "Apellido/s: " << surname << endl;
        cout << "Materia: " << subject << endl;
        cout << "Fecha: " << daytime << endl;
        cout << "Presente: " << state << endl;
    }

    csvFile.close();
}