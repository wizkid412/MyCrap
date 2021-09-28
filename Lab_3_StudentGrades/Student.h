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
	//Student(std::string student, std::string course); // default constructor 
	~Student(); // default destructor of Student class
	void addGrade(int Grade); //Function to add a grade to vector
	void sortGrade(); //sorts the numbers brought in the teh vector 
	float averageGrade(); //adds all values in the vector adn divids by the count
	int lowestGrade(); //Sorts through vector for the lowest number
	int highestGrade(); //Sorts through vector for the highest number
	int gradeCount(); // counts how many items are in teh vector
	void displayGrades();

	const std::string& getstudentName();

	void setStudent(const std::string& student);

	const std::string& getCourse();

	void setCourse(const std::string& course);
};