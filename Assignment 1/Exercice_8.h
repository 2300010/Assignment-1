#pragma once
class Exercice_8
{
public:

	//Declare constants for X and Y
	int const X = 2;
	int const Y = 3;

	//Declare method for line execution
	int SimpleLineExecution(char subQuestion) 
	{
		//Switch case that returns either the result of execution or a code to determine what to do
		if(subQuestion == 'b')
		{
			return X + X;
		}
		else if (subQuestion == 'e')
		{
			return Y + X;
		}
		else if (subQuestion == 'f')
		{
			return X * Y + Y + X;
		}
		else
		{
			return 1;
		}

	}

	//Declare method to calculate the 4 basic equations (addition, substraction, division and multiplication)
	float SumProductDifferenceQuotient(float firstNumber, float secondNumber, char equation) 
	{
		if (equation == 'a') 
		{
			return firstNumber + secondNumber;
		}
		else if (equation == 's')
		{
			return firstNumber - secondNumber;
		}
		else if (equation == 'd')
		{
			return firstNumber / secondNumber;
		}
		else if (equation == 'm')
		{
			return firstNumber * secondNumber;
		}



	}

	//Declare a method to determine which number comes first between two
	int NumberIsBigger(int firstInteger, int secondInteger)
	{
		if (firstInteger > secondInteger)
		{
			return firstInteger;
		}
		else if (secondInteger > firstInteger)
		{
			return secondInteger;
		}
		else
		{
			return 0;
		}

	}

	//Declare a method to calculate the sum, average and product of three numbers
	float SumAverageProduct(float firstNumber, float secondNumber, float thirdNumber, char equation)
	{
		//Verify which equation result to return
		if (equation == 's')
		{
			return firstNumber + secondNumber + thirdNumber;
		}
		else if (equation == 'a')
		{
			return (firstNumber + secondNumber + thirdNumber) / 3;
		}
		else if (equation == 'p')
		{
			return firstNumber * secondNumber;
		}
	}

	//Declare method to determine largest and smallest number between three numbers
	float LargestAndSmallestNumber(float firstNumber, float secondNumber, float thirdNumber, char largestOrSmallest)
	{
		//Declare variables
		float largestNumber = firstNumber;
		float smallestNumber = firstNumber;

		//Declare array to recieve the numbers
		float floatArray[] = { firstNumber, secondNumber, thirdNumber};

		//For-Loop to dertermine the largest number
		for (int i = 1; i < 3; i++)
		{
			if (floatArray[i] > largestNumber)
			{
				largestNumber = floatArray[i];
			}
		}

		//For-Loop to dertermine the smallest number
		for (int i = 1; i < 3; i++)
		{
			if (floatArray[i] < smallestNumber)
			{
				smallestNumber = floatArray[i];
			}
		}

		//Verify which number to return
		if (largestOrSmallest == 'l')
		{
			return largestNumber;
		}
		else if (largestOrSmallest == 's')
		{
			return smallestNumber;
		}

	}

	//Declare method to calculate circle measurements
	float CircleMeasurementsCalculator(float radius, char measure)
	{
		//Declare contant for pi
		float const PI = 3.14159f;

		//Verify which measurement to return
		if (measure == 'd')
		{
			return radius * 2;
		}
		else if (measure == 'c')
		{
			return 2 * PI * radius;
		}
		else if (measure == 'a')
		{
			return PI * (radius * radius);
		}

	}

	//Declare method to calculate gas consumption
	float GasConsumptionEvery100Km(float litres, int kilometers)
	{
		return litres * 100 / kilometers;
	}

	//Declare method to calculate the gross weekly sales
	float WeeklySalesmanSalary(float sales)
	{
		//Declare constant for the commission rate and base salary
		float const commission = 0.09f;
		int const baseSalary = 200;

		return 200 + (commission * sales);
	}

};

