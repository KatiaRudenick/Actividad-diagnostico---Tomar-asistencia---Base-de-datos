:: Compilo código objeto
g++ -Wall -std=c++11 -I.\Include -c .\Implementacion\Student.cpp
g++ -Wall -std=c++11 -I.\Include -c .\Implementacion\Course.cpp
g++ -Wall -std=c++11 -I.\Include -c .\Implementacion\AttendanceManagement.cpp

g++ -Wall -std=c++11 -I.\Include -c main.cpp 

:: Compilo el Binario
g++  Student.o Course.o AttendanceManagement.o main.o -o attendance.exe

:: Limpio los códigos objeto
DEL AttendanceManagement.o
DEL Student.o
DEL Course.o
DEL main.o
:: Ejecuto
attendance.exe