
#include <iostream>
#include <iomanip>
#include <cc>
#include "Exercice_1.h"
#include "Exercice_2.h"
#include "Exercice_5.h"
#include "Exercice_8.h"
#include "Assignment 1.h"

using namespace std;

//Declare objects of the exercices classes
Exercice_1 ex1;
Exercice_2 ex2;
Exercice_5 ex5;
Exercice_8 ex8;

//Declare signatures
void Exercice1();
int Exercice2();
int Exercice5();

int main()
{
	

	//Declare variables for user entry
	char userEntryChoice;
	
	try
	{
		//Ask user to choose an option of the menu
		cout << "Please enter the exercice number to test it:" << endl;
		
		//Program loop with menu
		do 
		{
			//Print menu
			cout << "Exercice 1" << endl;
			cout << "Exercice 2" << endl;
			cout << "Exercice 3" << endl;
			cout << "Exercice 4" << endl;
			cout << "Exercice 5" << endl;
			cout << "Exercice 6" << endl;
			cout << "Exercice 7" << endl;
			cout << "Exercice 8" << endl;
			cout << "Exercice 9" << endl;
			cout << "To quit, enter 0: ";

			//Read user entry
			cin >> userEntryChoice;

			switch (userEntryChoice)
			{
				case '1':
				{
					Exercice1();
				}
					break;
				case '2':
				{
					//Call function for Exercice 2
					Exercice2();
				}
					break;
				case '3':
				{

				}
					break;
				case '4':
				{

				}
					break;
				case '5':
				{
					//Call function for Exercice 5
					Exercice5();
				}
					break;
				case '6':
				{

				}
					break;
				case '7':
				{

				}
					break;
				case '8':
				{

				}
					break;
				case '9':
				{

				}
					break;
				case '0':
				{
					//Print quit message
					cout << "\nYou are quitting the program!\n";
					system("pause");
				}
					break;
				default:
				{
					//Print invalid entry message
					cout << "\nError! Please select a valid option:\n";
				}
					break;
			}

		} while (userEntryChoice != '0');
		
		return 1;
	}
	catch (...)
	{
		cout << "Error!";
	}
}

void Error(std::istream& stream,string message)
{
	stream.clear();
	stream.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\nError! " << message << ".";
}


double verifyDouble(std::istream& stream) {
	double variable;
	while (true)
	{
		//Receive input 
		stream >> variable;
		//Verify if the entry is the right type of variable and postivie
		if (stream.fail() || variable <= 0)
		{
			//Reset state and content of cin
			Error(stream,"Please enter the right positive value without decimals");
		}
		else
		{
			//If fail() is false
			//Break out of the loop
			break;
		}
	}
	return variable;
}

void Exercice1() {
	double unitPrice(0.00);
	double quantity(0.00);

	cout << "\nPlease enter the number of units : ";
	unitPrice = verifyDouble(cin);

	cout << "\nPlease enter the number of quantity : ";
	quantity = verifyDouble(cin);

	ex1.Number2(unitPrice, quantity);
	cout << "\n";
	
}

int Exercice2()
{
	try
	{
		//Declare variables
		int floorsUserEntry = 0;
		float pressureUserEntry = 0;
		float labGradeUserEntry = 0;
		float midtermGradeUserEntry = 0;
		float finalGradeUserEntry = 0;
		float paycheckUserEntry;
		float foodExpensesUserEntry;
		float householdExpensesUserEntry;
		float commonExpensesUserEntry;
		float transportExpensesUserEntry;
		float rentUserEntry;
		float monthlyBillsUserEntry;
		float totalExpensesUser;

		////Set precision to 2 decimals
		//cout << setprecision(2);

		//Ask user to enter number of floors for the building
		cout << "\nPlease enter the number of floors: ";

		//Failsafe for variable type
		while (true)
		{
			//Read user entry
			cin >> floorsUserEntry;

			//Verify if the entry is the right type of variable
			if (cin.fail()) 
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number without decimals.";
			}
			else 
			{
				//Verify if entry is lower or equal to 0
				if(floorsUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number without decimals.";
				}
				else 
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Print result of the calculation
		cout << "\nA building of " << floorsUserEntry << " floors is "
			<< ex2.BuildingHeightCalculator(floorsUserEntry) << " meters.\n";

		//Ask user to enter number of floors for the building
		cout << "\nPlease enter the pressure in kPa: ";
		
		//Failsafe for variable type
		while (true)
		{
			//Receive input 
			cin >> pressureUserEntry;

			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number.";
			}
			else
			{
				if (pressureUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Print result of the conversion
		cout << "\nA pressure of " << pressureUserEntry << " kPA is equal to "
			<< ex2.AtmospherePressureConverter(pressureUserEntry) << " atm.\n";

		//Ask user to enter the grade for the Laboratory 
		cout << "\nPlease enter the laboratory grade: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> labGradeUserEntry;

			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
			}
			else
			{
				if (labGradeUserEntry <= 0 || labGradeUserEntry > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Ask user to enter the grade for the Midterm exam
		cout << "\nPlease enter the midterm exam grade: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> midtermGradeUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
			}
			else
			{
				if (midtermGradeUserEntry <= 0 || midtermGradeUserEntry > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Ask user to enter the grade for the Final exam
		cout << "\nPlease enter the final exam grade: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> finalGradeUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
			}
			else
			{
				if (finalGradeUserEntry <= 0 || finalGradeUserEntry > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Print final grade
		cout << "\nThe final grade of the student is "
			<< ex2.FinalGradeCalculator(labGradeUserEntry, midtermGradeUserEntry, finalGradeUserEntry) << "%.\n";

		//Ask user to enter the amount for the paycheck 
		cout << "\nPlease enter your biweekly paycheck: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> paycheckUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (paycheckUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the food expenses
		cout << "\nPlease enter your food expenses: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> foodExpensesUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (foodExpensesUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the household expenses
		cout << "\nPlease enter your household expenses: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> householdExpensesUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (householdExpensesUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the common expenses
		cout << "\nPlease enter your common expenses: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> commonExpensesUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (commonExpensesUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the transport pass
		cout << "\nPlease enter your monthly transport pass: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> transportExpensesUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (transportExpensesUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the monthly bills
		cout << "\nPlease enter your other monthly bills: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> monthlyBillsUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (monthlyBillsUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the rent
		cout << "\nPlease enter your rent: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> rentUserEntry;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (rentUserEntry <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Set local variable to the function's return value
		totalExpensesUser = ex2.ExpensesCalculator(foodExpensesUserEntry, householdExpensesUserEntry,
			commonExpensesUserEntry, transportExpensesUserEntry, rentUserEntry, monthlyBillsUserEntry);

		//Print the result of all the operations
		cout << "\n\nYour total expenses amount to: " << totalExpensesUser << "$ per month.";
		cout << "\nYour total income is: " << paycheckUserEntry * 2 << "$ per month.";
		cout << "\nAfter all expenses are paid, you are left with: " 
			<< (paycheckUserEntry * 2) - totalExpensesUser << "$ per month.\n";

		system("pause");

		return 1;
	}
	catch (...)
	{

	}

	//Failsafe for variable type
	//while (true)
	//{
	//	//Receive input

	//	//Verify if the entry is the right type of variable
	//	if (cin.fail())
	//	{
	//		//If fail() is true
	//		//Reset state and content of cin
	//		cin.clear();
	//		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//		//Print error message
	//		cout << "\nError! Please enter a valid input in the form of numbers without decimals.";
	//	}
	//	else
	//	{
	//		//If fail() is false
	//		//Break out of the loop
	//		break;
	//	}
	//}
}

int Exercice5() 
{
	try
	{
		//Declare variables
		float gradeUserEntry = 0;
		float firstSideUserEntry = 0, secondSideUserEntry = 0, thirdSideUserEntry = 0;
		int day1 = 0, month1 = 0, year1 = 0, day2 = 0, month2 = 0, year2 = 0;
		float oldPremium = 0;
		int numberOfAccident = 0;
		int scoreJudge1 = 0, scoreJudge2 = 0, scoreJudge3 = 0, scoreJudge4 = 0, scoreJudge5 = 0, scoreJudge6 = 0;


			//GRADE CONVERTER
		//Ask the user to enter a grade
		cout << "\nPlease enter your grade in percentage without the symbol(%): ";

		//Read user entry
		cin >> gradeUserEntry;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a positive number with maximum 2 decimals equal or under a 100: ";
			cin >> gradeUserEntry;
		}

		//Failsafe for a invalid value
		while (true)
		{
			if (gradeUserEntry < 0 || gradeUserEntry > 100)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number with maximum 2 decimals equal or under a 100: ";
				cin >> gradeUserEntry;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Result of conversion
		cout << "\nYour letter grade is: " << ex5.GradeConverter(gradeUserEntry) << "\n";

			
			//DATE VERIFICATOR
		//Ask the user to enter the first date
		cout << "\nPlease enter a first date in the format (dd mm yyyy): ";

		//Read user entry
		cin >> day1 >> month1 >> year1;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a valid date in the format (dd mm yyyy): ";
			cin >> day1 >> month1 >> year1;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		//Failsafe for a invalid value
		while (true)
		{
			if (month1 < 0 || month1 > 12)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a valid month: ";
				cin >> month1;
			}
			else if (day1 < 0 || day1 > ex5.DaysInMonth(month1))
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a valid day in the selected month: ";
				cin >> day1;
			}
			else if (year1 < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a year A.C. (positive only): ";
				cin >> year1;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Print first year for the user
		cout << "\nThe first date selected is: " << day1 << "-" << month1 << "-" << year1 << "\n";

		//Ask the user to enter the second date
		cout << "\nPlease enter a second date in the format (dd mm yyyy): ";

		//Read user entry
		cin >> day2 >> month2 >> year2;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a valid date in the format (dd mm yyyy): ";
			cin >> day2 >> month2 >> year2;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Failsafe for a invalid value
		while (true)
		{
			if (month2 < 0 || month2 > 12)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a valid month: ";
				cin >> month2;
			}
			else if (day2 < 0 || day2 > ex5.DaysInMonth(month2))
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a valid day in the selected month: ";
				cin >> day2;
			}
			else if (year2 < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a year A.C. (positive only): ";
				cin >> year2;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Print second year for the user
		cout << "\nThe second date selected is: " << day1 << "-" << month1 << "-" << year1 << "\n";

		//Print result of the algorithm
		if (ex5.FirstDateComesFirst(year1, year2, month1, month2, day1, day2))
		{
			cout << "\nThe first date (" << day1 << "-" << month1 << "-" << year1 << ") comes first.\n";
		}
		else
		{
			cout << "\nThe second date (" << day2 << "-" << month2 << "-" << year2 << ") comes first.\n";
		}


			//TRIANGLE VERIFICATOR
		//Ask the user to enter the first side's length
		cout << "\nPlease enter 3 lengths for sides of a triangle separated by spaces: ";

		//Read user entries
		cin >> firstSideUserEntry >> secondSideUserEntry >> thirdSideUserEntry;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter positive numbers with maximum 2 decimals: ";
			cin >> firstSideUserEntry >> secondSideUserEntry >> thirdSideUserEntry;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Failsafe for a invalid value
		while (true)
		{
			if (firstSideUserEntry < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive numbers with maximum 2 decimals: ";
				cin >> firstSideUserEntry;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		
		//Print result of the algorithm
		if (ex5.TriangleVerification(firstSideUserEntry, secondSideUserEntry, thirdSideUserEntry) == 's')
		{
			cout << "\nThis is a scalene triangle.\n";
		}
		else if (ex5.TriangleVerification(firstSideUserEntry, secondSideUserEntry, thirdSideUserEntry) == 'i')
		{
			cout << "\nThis is a isosceles triangle.\n";
		}
		else
		{
			cout << "\nThis is a equilateral triangle.\n";
		}


			//INSURANCE PREMIUM CALCULATOR
		//Ask the user to enter the price of the old premium
		cout << "\nPlease enter the old premium price: ";

		//Read user entry
		cin >> oldPremium;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a positive number with maximum 2 decimals: ";
			cin >> oldPremium;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Failsafe for a invalid value
		while (true)
		{
			if (oldPremium < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive numbers with maximum 2 decimals: \n";
				cin >> oldPremium;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}

		//Ask the user to enter the number of accidents
		cout << "\nPlease enter the number of accidents: ";

		//Read user entry
		cin >> numberOfAccident;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a positive number without decimals: ";
			cin >> numberOfAccident;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Failsafe for a invalid value
		while (true)
		{
			if (numberOfAccident < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive numbers without decimals: ";
				cin >> numberOfAccident;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}

		//Print result of algorithm
		cout << "\nThe new premium amounts to " << ex5.NewPremiumCalculator(oldPremium, numberOfAccident) << "$.\n";

			//JUDGES SCORE AVERAGE
		//Ask the user to enter the six scores of judges
		cout << "\nPlease enter the six scores (maximum 100) separated by a space: ";

		//Read user entries
		cin >> scoreJudge1 >> scoreJudge2 >> scoreJudge3 >> scoreJudge4 >> scoreJudge5 >> scoreJudge6;

		//Declare array to receive all scores
		int scores[] = { scoreJudge1, scoreJudge2, scoreJudge3, scoreJudge4, scoreJudge5, scoreJudge6 };

		//Failsafe for a invalid value
		for (int score : scores)
		{
			while (true)
			{
				if (score < 0 || score > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! " << score << " is invalid.\n"
						<< "Please enter a positive number (maximum 100) without decimals : ";
					cin >> score;
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Print result of algorithm
		cout << "\nThe average score of the judges is " 
			<< ex5.JudgesAverageScore(scores[0], scores[1], scores[2], scores[3], scores[4], scores[5]) << " out of 100 points.\n";


			//DISPLAY NEXT DAY
		//Ask the user to enter the six scores of judges
		cout << "\nPlease enter a date in the following format (dd mm yyyy): ";

		//Read user entries
		cin >> day1 >> month1 >> year1;

		//Failsafe for a invalid value
		while (true)
		{
			if (month1 < 0 || month1 > 12)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a valid month: ";
				cin >> month1;
			}
			else if (day1 < 0 || day1 > ex5.DaysInMonth(month1))
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a valid day in the selected month: ";
				cin >> day1;
			}
			else if (year1 < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a year A.C. (positive only): ";
				cin >> year1;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Verify if next day is in the next month and in the next year
		if (ex5.DisplayNextDay(day1, month1, year1) == 'd')
		{
			//Print result of the algorithm
			cout << "\nThe following date is: " << day1 + 1 << "-" << month1 << "-" << year1;
		}
		else if (ex5.DisplayNextDay(day1, month1, year1) == 'm')
		{
			//Print result of the algorithm
			cout << "\nThe following date is: 1-" << month1 + 1 << "-" << year1;
		}
		else
		{
			//Print result of the algorithm
			cout << "\nThe following date is: 1-1-" << year1 + 1;
		}



			//LEAP YEAR VERIFICATOR
		//Ask the user to enter the year to verify
		cout << "\nPlease enter a year: ";

		//Read user entry
		cin >> year1;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a positive number without decimals: ";
			cin >> year1;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Failsafe for a invalid value
		while (true)
		{
			if (year1 < 0)
			{
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive numbers with maximum 2 decimals: \n";
				cin >> year1;
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}

		if (ex5.IsLeapYear(year1))
		{
			cout << "\nThe year " << year1 << " is a leap year.\n";
		}
		else
		{
			cout << "\nThe year " << year1 << " is not a leap year.\n";
		}


		cout << "\n";


		return 1;
	}
	catch (...)
	{

	}
}

int Exercice8()
{

	try
	{
		//Declare variables
		char lineToExecute = ' ';

		//Ask user to choose a line to execute
		cout << "Please choose a line to execute (Enter the letter of the line): \n";
		cout << "a)	Write x\n";
		cout << "b)	Write x + x\n";
		cout << "c)	Write “x =”\n";
		cout << "d)	Write “x * x”\n";
		cout << "e)	Write “x * y”, y + x\n";
		cout << "f)	Write x * y + y + x\n";
		cout << "g)	Write “x * y + y + x” : ";

		//Read entry
		cin >> lineToExecute;

		//Failsafe for wrong type of variable
		while (cin.fail() || cin.peek() != '\n')
		{
			//Reset state and content of cin
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


			//Print error message
			cout << "\nError! Please enter a valid date in the format (dd mm yyyy): ";
			cin >> lineToExecute;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Verify the choice of user
		


	}
	catch (...)
	{

	}
}
