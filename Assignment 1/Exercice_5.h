#pragma once
class Exercice_5
{
public:

	//Declare method to convert grade to a letter
	char GradeConverter(float grade) 
	{
		try
		{
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

			//Return converted grade
			return convertedGrade;
		}
		catch (...)
		{

		}
	}

	//Declare method to verify if a first date comes before a second date
	bool FirstDateComesFirst(int firstYear, int secondYear, int firstMonth, int secondMonth, int firstDay, int secondDay)
	{
		//Verify if year of firstDate is smaller to year of secondDate
		if (firstYear < secondYear)
		{
			return true;
		}//Verify if year of firstDate is bigger to year of secondDate
		else if (firstYear == secondYear)
		{
			//Verify if month of firstDate is smaller to month of secondDate
			if (firstMonth < secondMonth)
			{
				return true;
			}
			else if (firstMonth == secondMonth)
			{
				if(firstDay < secondDay)
				{
					return true;
				}
			}
		}
		
		return false;
	}

	//Declare method to know the type of triangle
	char TriangleVerification(float firstSide, float secondSide, float thirdSide) 
	{
		try
		{
			if (firstSide != secondSide)
			{
				if (firstSide != thirdSide)
				{
					return 's';
				}
				else
				{
					return 'i';
				}

			}
			else if (secondSide != thirdSide)
			{
				return 'i';
			}
			else
			{
				return 'e';
			}
		}
		catch (...)
		{

		}
	}

	//Declare method to calculate insurance premium
	float NewPremiumCalculator(float oldPremium, int numberAccidents) 
	{
		if (numberAccidents == 0)
		{
			return oldPremium * 1.02;
		}
		else if (numberAccidents >= 1)
		{
			if (numberAccidents < 3)
			{
				return oldPremium * 1.05;
			}
			else if (numberAccidents < 4)
			{
				return oldPremium * 1.10;
			}
			else
			{
				return oldPremium * 1.30;
			}
		}
	}

	//Declare method to calculate judges average score
	float JudgesAverageScore(int score1, int score2, int score3, int score4, int score5, int score6)
	{
		//Declare array to receive every scores
		int listScores[] = { score1, score2, score3, score4, score5, score6 };
		int arrayLength = sizeof(listScores) / sizeof(int);

		//Declare variables to receive the highest and the lowest scores
		int highestScore = listScores[0];
		int lowestScore = listScores[0];

		//Declare variable to receive total of retained scores
		float retainedScoresSum = 0;

		//Loop to find highest score
		for (int i = 0; i < arrayLength; i++)
		{
			if (listScores[i] > highestScore) 
			{
				highestScore = listScores[i];
			}
		}

		//Loop to find lowest score
		for (int i = 0; i < arrayLength; i++)
		{
			if (listScores[i] < lowestScore)
			{
				lowestScore = listScores[i];
			}
		}

		//Loop to remove lowest score
		for (int i = 0; i < arrayLength; i++)
		{
			if(listScores[i] == lowestScore)
			{
				for (int j = i; j < arrayLength; j++)
				{
					listScores[j] = listScores[j + 1];
				}
				break;
			}
		}

		//Clear last element of the array and reduce size of 1
		listScores[arrayLength - 1] = 0;
		arrayLength--;

		//Loop to remove highest score
		for (int i = 0; i < arrayLength; i++)
		{
			if (listScores[i] == highestScore)
			{
				for (int j = i; j < arrayLength; j++)
				{
					listScores[j] = listScores[j + 1];
				}
				break;
			}
		}

		//Clear last element of the array and reduce size of 1
		listScores[arrayLength - 1] = 0;
		arrayLength--;

		//For loop to add scores
		for  (int score : listScores)
		{
			retainedScoresSum += score;
		}

		//Return result of algorithm
		return retainedScoresSum / arrayLength;
	}

	//Declare method to display the next day after the date entered
	char DisplayNextDay(int day, int month, int year)
	{
		if (day == DaysInMonth(month))
		{
			if (month == 12)
			{
				return 'y';
			}
			else
			{
				return 'm';
			}
		}
		else
		{
			return 'd';
		}
	}

	//Declare method to verify if date exist in a month
	int DaysInMonth(int month)
	{
		//Declare variable for return
		int daysInMonth = 0;

		switch (month)
		{
		case 1:
			daysInMonth = 31;
			break;
		case 2:
			daysInMonth = 28;
			break;
		case 3:
			daysInMonth = 31;
			break;
		case 4:
			daysInMonth = 30;
			break;
		case 5:
			daysInMonth = 31;
			break;
		case 6:
			daysInMonth = 30;
			break;
		case 7:
			daysInMonth = 31;
			break;
		case 8:
			daysInMonth = 31;
			break;
		case 9:
			daysInMonth = 30;
			break;
		case 10:
			daysInMonth = 31;
			break;
		case 11:
			daysInMonth = 30;
			break;
		case 12:
			daysInMonth = 31;
			break;
		default:
			break;
		}

		return daysInMonth;
	}

	//Declare method to verify if a year is a leap year
	bool IsLeapYear(int year)
	{
		//Verify if the year is divisible by 4
		if (year % 4 == 0) 
		{
			if (year % 100 != 0)
			{
				return true;
			}
			else
			{
				if (year % 400 == 0) 
				{
					return true;
				}
			}
		}

		return false;
	}

};

