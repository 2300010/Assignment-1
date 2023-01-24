#pragma once
class Exercice_2
{
public:

	//Declare method to calculate building height
	int BuildingHeightCalculator(int userEntry)
	{
		try
		{
			//Initialize variables
			int nbrFloors{ 0 };
			const int FIRST_FLOOR_HEIGHT{ 6 };
			const int AVERAGE_FLOOR_HEIGHT{ 4 };

			//Set nrbFloors to the value of userEntry
			nbrFloors = userEntry - 1;

			//Return calculated height of the building
			return FIRST_FLOOR_HEIGHT + (nbrFloors * AVERAGE_FLOOR_HEIGHT);
		}
		catch (...)
		{
			
		}
	}

	//Declare method to convert pressure
	float AtmospherePressureConverter(float userEntry)
	{
		try
		{
			//Initialize variables
			float kPaEntered;
			const float ONE_ATM_IN_kPa = 101.325;

			//Set kPaEntered to the value of userEntry
			kPaEntered = userEntry;

			//Return converted pressure from kPa to atm
			return kPaEntered / ONE_ATM_IN_kPa;
		}
		catch (...)
		{

		}
	}

	//Declare method to calculate evalution average
	float FinalGradeCalculator(float userLabGrade, float userMidtermGrade, float userFinalExamGrade)
	{
		try
		{
			float LaboratoryGrade = userLabGrade * 40 / 100;
			float MidtermExamGrade = userMidtermGrade * 25 / 100;
			float FinalExamGrade = userFinalExamGrade * 35 / 100;

			return LaboratoryGrade + MidtermExamGrade + FinalExamGrade;
		}
		catch (...)
		{

		}
	}

	//Declare method to calculate expenses
	float ExpensesCalculator(float foodExpenses, float householdExpenses,
		float commonExpenses, float transportPass, float rent, float monthlyBills)
	{
		try
		{
			//Declare variables
			float weeklyExpenses = foodExpenses + householdExpenses + commonExpenses;
			float monthlyExpenses = transportPass + rent + monthlyBills;
			float totalExpense = weeklyExpenses * 2 + monthlyExpenses;

			return totalExpense;
		}
		catch (...)
		{

		}
	}
};

