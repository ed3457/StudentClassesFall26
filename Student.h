#pragma once
#include <string>
using namespace std; 

class Student
{
private: 
	string name;
	string id; 

public:
	void printStudentInfo();

	// functions to set and get the id
	void setID(string i);
	string getID();

	void setName(string n);
	string getName(); 

	// Constructor: a function that runs at the time
	// of the object creation, and it is used to 
	// initialize the object's variables 

	Student(); // default constructor 
	Student(string i, string n); // overloaded constructors

	// copy constructor 
	Student(const Student& otherobject);
	
};

