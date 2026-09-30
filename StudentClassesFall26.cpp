#include <iostream>
#include "Student.h"
using namespace std; 

int main()
{
    cout << "Hello World!\n";

    Student student1; 
    
    student1.setID("007");
    student1.setName("James Bond");
    //student1.printStudentInfo();


    Student student2;

    student2.setID("1AB");
    student2.setName("Mary Adams");
   // student2.printStudentInfo();


    Student student3;
    //student3.printStudentInfo();

    Student student4("1234", "Adam Jason");
    //student4.printStudentInfo();

    /*Student english1[]{student1, student2,student3, student4};

    for (int i = 0; i < 4; i++)
    {
        cout << "Student No." << (i + 1) << endl;
        english1[i].printStudentInfo();
        cout << "--------------\n";

    }*/


    //int classSize = 0;
    //cout << "Please enter the class size:";
    //cin >> classSize;

    //Student* englishClass = new Student[classSize];// array of students

    //englishClass[0] = student1;

    //delete[] englishClass;


    //englishClass = new Student();// single student object 


    Student student4Backup(student4);

    student4Backup.printStudentInfo();

    student4.setID("55555");
    student4.printStudentInfo();

    student4Backup.printStudentInfo();

    
}

