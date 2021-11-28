using namespace std;
#include <iostream>

int main()
{
    int day, month;
    cin >> day >> month;

	switch (day)
	{
	case 1: 
		cout << "Monday ";
		break;
	case 2:
		cout << "Tuesday ";
		break;
	case 3:
		cout << "Wednesday ";
		break;
	case 4:
		cout << "Thirsday ";
		break;
	case 5:
		cout << "Friday ";
		break;
	case 6:
		cout << "Saturday ";
		break;
	case 7:
		cout << "Sunday ";
		break;
	default:
		cout << "Invalid day.";
		break;
	}

	switch (month)
	{
	case 1:
		cout << "January";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
	default:
		cout << "Invalid month.";
		break;
	}
}

