#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Student 
{
	std::vector <int> grades;
	std::string studentName;
	std::string courseName;
public:
	Student(std::string student, std::string course); // default constructor 
	~Student(); // default destructor of Student class
	void addGrade(int Grade); //Function to add a grade to vector
	void sortGrade();
	float averageGrade();
	int lowestGrade();
	int highestGrade();
	int gradeCount();
	void displayGrades();

	const std::string& getstudentName()
	{
		return studentName;
	}

	void setStudent(const std::string& student)
	{
		studentName = student;
	}

	const std::string& getCourse()
	{
		return courseName;
	}

	void setCourse(const std::string& course)
	{
		courseName = course;
	}
};