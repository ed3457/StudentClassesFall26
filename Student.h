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


};

