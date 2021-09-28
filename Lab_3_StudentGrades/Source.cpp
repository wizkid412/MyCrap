/*Class and Data members:Create a class called Student that stores a student’s grades (integers) in a vector (do not use an array).
The class should have data members that store a student’s name and course forwhich the grades are earned. Using an Object-Oriented
program with a class, store and manipulate data using a vector within the class. */

#include <fstream>
#include <string>
#include "Student.h"



using namespace std; 
void wait();



int main()
{
	Student grade; 

	string fileName;
	string studentName, courseName;

	ifstream infile; //instantiate a file object
	int num{ 0 };  //variable to hold the number read in; initialized to 0

	cout << "Enter input file name : ";
	cin >> fileName;
	infile.open(fileName); //try to open the file

	/*The following is a loop to read in all of the values in the file.
This loop executes for as long as the file object has not gone into the fail
state (caused by reading past the end of the file or reading in a non-numeric value)
and as long as the last number read in is positive.  Otherwise, the loop
ends, and the program ends.*/
// check if file opening failed, display error message and exit
	if (infile.fail())
	{
		cout << "Unable to open file: " << fileName << "... Exiting program" << endl;
	}
	else
	{
		{
			//grade = new Student(studentName, courseName);	// create an object of Student class   //////////////////////////////////////////////////////////////////////////////

			getline(infile, studentName);	// read the studentName 
			getline(infile, courseName);	// read the courseName

		}
		while (!infile.fail() && num >= 0)
		{
			infile >> num; //read in a value from the file

			/*If the file object goes into the fail state, BUT the eof has not been
			reached, then the problem is due to reading a non-numeric value into
			a variable designed to hold a numeric value. */

			if (infile.fail() && !infile.eof())
			{
				cout << "A non-numeric value was found in the file...Exiting program. " << endl;
			}
			/*If the file object goes into the fail state, and the eof has been
			reached, the file object is in the fail state because the program has
			read past the end of the file.  This can occur if the file is empty.
			If the file is empty and you try to read in anything, the file object
			immediately goes into the fail state, and the eof function returns TRUE. */

			else if (infile.fail() && infile.eof())
			{
				cout << "End of file reached." << endl;
				//Closing Statements
				cout << "\nStatistics \t" << endl;
				cout << "Average: \t" << grade.averageGrade() << endl;
				cout << "Lowest Grade: \t" << grade.lowestGrade() << endl;
				cout << "Highest Grade:\t" << grade.highestGrade() << endl << endl;
				grade.displayGrades();
			}
			else if (num < 0) //If the number is negative...
			{
				cout << "A negative value was found in the file...Exiting program. " << endl;
			}
			else
			{
				//	cout << "The number read in was " << num << endl; // good for testing if the program read in the values
				grade.addGrade(num);
			}

			}  //end of while loop 
			
		}
		infile.close(); // close the file

	


		wait();
		return 0;

}


