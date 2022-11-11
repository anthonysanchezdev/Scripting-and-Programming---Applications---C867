#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "degree.h"

using namespace std;
using std::cout;
using std::string;
using std::endl;
using std::left;
using std::setw;

class Student {

public:
	const static int numberOfCourses = 3;

private:

	string studentID;
	string firstNameOfStudent;
	string lastNameOfStudent;
	string emailOfStudent;
	int ageOfStudent;
	int studentDaysInCourse[numberOfCourses];
	StudentDegreeProgram degreeProgram;

public:

	//Constructors
	Student();
	Student(string studentID, string firstNameOfStudent, string lastNameOfStudent, string emailOfStudent, int ageOfStudent, int studentDaysInCourse[], StudentDegreeProgram degreeProgram);

	//GETTERS
	string getStudentID();
	string getFirstNameOfStudent();
	string getLastNameOfStudent();
	string getEmailOfStudent();
	int getAgeOfStudent();
	const int* getStudentDaysInCourse();
	StudentDegreeProgram getDegreeProgram();

	//SETTERS
	void setStudentID(string studentID);
	void setFirstNameOfStudent(string firstNameOfStudent);
	void setLastNameOfStudent(string lastNameOfStudent);
	void setEmailOfStudent(string emailOfStudent);
	void setAgeOfStudent(int ageOfStudent);
	void setStudentDaysInCourse(const int studentDaysInCourse[]);
	void setStudentDegreeProgram(StudentDegreeProgram degree);

	//Print
	void print();

	//Destructor
	~Student();
};
