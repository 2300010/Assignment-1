// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Exercice_2.h"
#include "Exercice_5.h"
#include "Assignment 1.h"
using namespace std;

//Declare objects of the exercices classes
Exercice_2 ex2;
Exercice_5 ex5;

//Declare signatures
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

int Exercice2()
{
	try
	{
		//Declare variables
		int floorsUserEntry;
		float pressureUserEntry;
		float labGradeUserEntry;
		float midtermGradeUserEntry;
		float finalGradeUserEntry;
		float userEntryPaycheck;
		float userEntryFoodExpenses;
		float userEntryHouseholdExpenses;
		float userEntryCommonExpenses;
		float userEntryTransportExpenses;
		float userEntryRent;
		float userEntryMonthlyBills;
		float userTotalExpenses;

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
			cin >> userEntryPaycheck;
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
				if (userEntryPaycheck <= 0)
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
			cin >> userEntryFoodExpenses;
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
				if (userEntryFoodExpenses <= 0)
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
			cin >> userEntryHouseholdExpenses;
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
				if (userEntryHouseholdExpenses <= 0)
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
			cin >> userEntryCommonExpenses;
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
				if (userEntryCommonExpenses <= 0)
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
			cin >> userEntryTransportExpenses;
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
				if (userEntryTransportExpenses <= 0)
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
			cin >> userEntryMonthlyBills;
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
				if (userEntryMonthlyBills <= 0)
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
			cin >> userEntryRent;
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
				if (userEntryRent <= 0)
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
		userTotalExpenses = ex2.ExpensesCalculator(userEntryFoodExpenses, userEntryHouseholdExpenses,
			userEntryCommonExpenses, userEntryTransportExpenses, userEntryRent, userEntryMonthlyBills);

		//Print the result of all the operations
		cout << "\n\nYour total expenses amount to: " << userTotalExpenses << "$ per month.";
		cout << "\nYour total income is: " << userEntryPaycheck * 2 << "$ per month.";
		cout << "\nAfter all expenses are paid, you are left with: " 
			<< (userEntryPaycheck * 2) - userTotalExpenses << "$ per month.\n";

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
		float gradeUserEntry;

		//Ask the user to enter a grade
		cout << "\nPlease enter your grade in percentage without the symbol(%): ";

		//while (true)
		//{
		//	//Read user entry
		//}
		
		return 1;
	}
	catch (...)
	{

	}
}

string GradeConverter(float grade)
{
	try
	{
		//Declare constant for message
		string returnMessage = "\nYour grade: ";

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


