#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

int main()

{
	int month, day, year;
	
	cout << "Enter number only"<<endl;
	
	cout << "Enter Month: ";
	cin >> month;
	
	cout << "Enter Day: ";
	cin >> day;

	cout << "Enter Year: ";
	cin >> year;
	

	switch (month)
	{
		case 1:
		if (day <= 31)
		{
			cout << "JANUARY" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid Date!" << endl;
		}
		break;
		
		case 2:
		if (day <= 28)
		{
			cout << "FEBRUARY" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid Date!" << endl;
		}	
		break;
		
		case 3:
		if (day <= 31)
		{	
			cout << "MARCH" <<" "<< day <<","<<" "<< year << endl;
		}
		else	
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 4:
		if (day <= 30)
		{
			cout << "APRIL" <<" "<< day <<","<<" "<< year << endl;
     	}
     	else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 5:
		if (day <= 31)
		{
			cout << "MAY" <<" "<< day <<","<<" "<< year << endl;
     	}
     	else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 6:
		if (day <= 30)
		{
			cout << "JUNE" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid date!" << endl;
     	}
	
		break;
		case 7:
		if (day <= 31)
		{
		cout << "JULY" <<" "<< day <<","<<" "<< year << endl;
     	}
     	else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 8:
		if (day <= 31)
		{
			cout << "AUGUST" <<" "<< day <<","<<" "<< year << endl;
		}
		else
		{
			cout << "Invalid date!" << endl;
		}
		
		break;
		
		case 9:
		if (day <= 30)
		{	
			cout << "SEPTEMBER" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 10:
		if (day <= 31)
		{
		cout << "OCTOBER" <<" "<< day <<","<<" "<< year << endl;
	    }
	    else 
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 11:
		if (day <= 30)
		{	
		cout << "NOVEMBER" <<" "<< day <<","<<" "<< year << endl;
		}
		else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 12:
		if (day <= 31)
		{
			cout << "DECEMBER" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid date!" << endl;
		}
		break;
		default:
		cout<<"Invalid date!";
	
}
_getch ();
return 0;
}
