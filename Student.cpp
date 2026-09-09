#include "Student.h"
#include <iostream>
using namespace std; 

void Student::printStudentInfo()
{
	cout << "ID:" << id << endl;
	cout << "Name:" << name << endl;
}

void Student::setID(string i)
{
//TODO: Add validation 
	id = i; 
}
string Student::getID()
{  // Optional: add formatting 
	return id; 
}
void Student::setName(string n)
{ 
	name = n;
}
string Student::getName()
{
	return name; 
}
