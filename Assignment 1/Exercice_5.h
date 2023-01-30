#pragma once
#include <string>
class Exercice_5
{
public:

	//Declare method to convert grade to a letter
	std::string GradeConverter(float grade) 
	{
		try
		{
			//Declare constant for message
			std::string returnMessage = "\nYour grade: ";

			//Declare variable to receive letter grade
			char convertedGrade = ' ';

			//Verify in what category grade falls in
			if (grade > 89)
			{
				//Set converted grade to A
				convertedGrade = 'A';
			}
			else if (grade > 79)
			{
				//Set converted grade to B
				convertedGrade = 'B';
			}
			else if (grade > 69)
			{
				//Set converted grade to C
				convertedGrade = 'C';
			}
			else if (grade > 59)
			{
				//Set converted grade to D
				convertedGrade = 'D';
			}
			else
			{
				//Set converted grade to F
				convertedGrade = 'F';
			}

			//Add grade to return message
			returnMessage += convertedGrade;

			//Return converted grade
			return returnMessage;
		}
		catch (...)
		{

		}
	}
};

