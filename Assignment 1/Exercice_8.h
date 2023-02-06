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
		switch (subQuestion)
		{
		case 'a':
			return X;
			break;
		case 'b':
			return X + X;
			break;
		case 'c':
			return 33;
			break;
		case 'd':
			return 44;
			break;
		case 'e':
			return Y + X;
			break;
		case 'f':
			return X * Y + Y + X;
			break;
		case 'g':
			return 77;
			break;
		default:
			break;
		}
	}

};

