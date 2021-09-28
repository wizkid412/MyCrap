#include "Student.h"


/*Student::Student(std::string student, std::string course)// constructor
 {
	studentName = student;
	courseName = course;
}*/
Student::~Student()// destructor
{}

void Student::addGrade(int grade)//Function to add a grade to vector
{
	grades.push_back(grade);
}

void Student::sortGrade()//Function to sort vector
{//need to go back and use the cod from the book
	// sorting using sort() from algorithm library
	sort(grades.begin(), grades.end()); // vector name is grades not grade
}

float Student::averageGrade()//Function to calculate average grade
{
	float avg = 0;
	for (int i = 0; i < grades.size(); i++)
	{
		avg += grades[i];
	}
	return avg/grades.size();
}

int Student::lowestGrade()// Find lowest grade of a student
{
	int loGrade = 0;// initialize to 0 if there are no grades for teh student

	// check if vector is empty
	if (grades.size() > 0)
	{
		// if not empty, set minimum as first in vector
		loGrade= grades[0];

		// loop the vector from 2nd element
		for (int i = 0; i < grades.size(); i++)
		{
			if (loGrade > grades[i])
			{
				loGrade = grades[i];
			}
		}
	}
	else
	{
		std::cout << "Student has no grades available " << studentName << std::endl;
	}
	return loGrade;
}

int Student::highestGrade()
{
	int hiGrade = 0;
	// check if vector is empty
	if (grades.size() > 0)
	{
		// if not empty, set minimum as first in vector
		hiGrade = grades[0];

		// loop the vector from 2nd element
		for (int i = 0; i < grades.size(); i++)
		{
			if (hiGrade < grades[i])
			{
				hiGrade = grades[i];
			}
		}
	}
	else
	{
		std::cout << "Student has no grades available " << studentName << std::endl;
	}
	return hiGrade;
}

int Student::gradeCount()
{
	return grades.size();
}

void Student::displayGrades()
{
	std::cout << "The grades for " << getstudentName() << " - " << getCourse() << std::endl;
	sortGrade();
	for (int i = 0; i < grades.size(); i++)
	{
		std::cout << grades[i] << std::endl;
	}
}

const std::string& Student::getstudentName()
{
	return studentName;
}
void Student::setStudent(const std::string& student)
{
	studentName = student;
}
const std::string& Student::getCourse()
{
	return courseName;
}
void Student::setCourse(const std::string& course)
{
	courseName = course;
}




void wait()// placed in student imp becasue i ddint know whether to put other function in its own
//imp since we dont want it in the driver
{
	//The following if-statement checks to see how many characters are in cin's buffer
	//If the buffer has characters in it, the clear and ignore methods get rid of them.
	if (std::cin.rdbuf()->in_avail() > 0) //If the buffer is empty skip clear and ignore
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Clear the input buffer 
	}
	char ch;
	std::cout << "Press the Enter key to continue ... ";
	std::cin.get(ch);
}