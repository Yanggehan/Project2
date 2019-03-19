#include <iostream>
#include <string>
using namespace std;

class date {
private:
	int day, month, year;
	char x;
	int monthdays[13];
	string monthName;
public:
	date() {};
	date(int months, int dayss, int years) {
		month = months;
		day = dayss;
		year = years;
		monthdays[months];
		
	}
	void setmonthDay(int month) {
		monthdays[month];
		/*monthdays[0] = 31;
		monthdays[1] = 28;
		monthdays[2] = 31;
		monthdays[3] = 30;
		monthdays[4] = 31;
		monthdays[5] = 30;
		monthdays[6] = 31;
		monthdays[7] = 31;
		monthdays[8] = 30;
		monthdays[9] = 31;
		monthdays[10] = 30;
		monthdays[11] = 31;*/
	}
	void setmonthName(int month3) {
		month = month3;
	}
	int getyear() {
		return year;
	}
	int getday() {
		return day;
	}
	int getmonth() {
		return month;
	}
	string getmonthName() {
		switch (month)
		{
		case 1:
			monthName = "January";
			break;
		case 2:
			monthName = "February";
			break;
		case 3:
			monthName = "March";
			break;
		case 4:
			monthName = "April";
			break;
	
		case 5:
			monthName = "May";
			break;
		case 6:
			monthName = "June";
			break;
		
		case 7:
			monthName = "July";
			break;
		case 8:
			monthName = "August";
			break;
		case 9:
			monthName = "September";
			break;
		case 10:
			monthName = "October";
			break;
		case 11:
			monthName = "November";
			break;
		case 12:
			monthName = "December";
			break;
		}
	
		return monthName;
	}
	
	int getmonthDay() {
		monthdays[1] = 31;
		monthdays[2] = 28;
		monthdays[3] = 31;
		monthdays[4] = 30;
		monthdays[5] = 31;
		monthdays[6] = 30;
		monthdays[7] = 31;
		monthdays[8] = 31;
		monthdays[9] = 30;
		monthdays[10] = 31;
		monthdays[11] = 30;
		monthdays[12] = 31;
		return monthdays[month];
	}
	int operator++() {

		if (day == monthdays[month]) {
			day = 1;
			month++;
			month %= 12;
			if (month == 1)
				year++;
		}
		else
			day++;
		return day,month,year;
	}
	int operator--() {

		if (day == 0|| day == 1) {
			
			month--;
		
			if (month == 0) {
				month = 12;
				year--;
			}
			
			day = getmonthDay();
		}
		else
			day--;
		return day, month, year;
	}
	int changeDay() {
		do {
			cout << " enter the day.." << endl;
			cin >> day;
			if (day > getmonthDay() || day < 0) {
				cout << " you cant enter the day bigger than month's day" << endl;

				x = 'X';
			}
			else {
				x ='N';
			}
		} while (x != 'N');
			return day;
	}
	int coculaterMonth(date Date) {
	
		return this->getmonth() - Date.getmonth();
	}
	int coculaterDay(date Date) {
	
		return this->getday() - Date.getday();
	
	}
	int coculaterYear(date Date) {
		return this->getyear() - Date.getyear();
		
	}
};
int main() {
	int sub;
	int day, year, month, day2, year2, month2;
	
	char chooice,x;
	do{
		cout << " enter the month" << endl;
		cin >> month;
		if (month < 0 || month >12) {
			cout << "you cant enter the month bigger than 12 and smaller than 0." << endl;
			x = 'X';
		}
		else {
			x = 'N';
		}
	} while (x != 'N');
		cout << " enter the day" << endl;
		cin >> day;
		cout << " enter the year" << endl;
		cin >> year;
		date date1(month, day, year);
		date1.setmonthDay(month);
	
		if ( day > date1.getmonthDay() || day < 0) {
			cout << " you cant enter the day bigger than month's day" << endl;
			date1.changeDay();
			x = 'X';
		}
		
\
	
	
	do {
		cout << " are you want Prefix (D) and postfix(P) increment operators or not(N)?" << endl;
		cin >> chooice;
		if (chooice == 'D') {
			date1.operator--();
			//date1.setmonthName(month);
			cout << date1.getmonthName();
			cout << " ";
			cout << date1.getday();
			cout << " ";
			cout << date1.getyear() << endl;
		}
		if (chooice == 'P') {
			date1.operator++();
			//date1.setmonthName(month);
			cout << date1.getmonthName();
			cout << " ";
			cout << date1.getday();
			cout << " ";
			cout << date1.getyear()<< endl;
		}
	} while (chooice != 'N');
	do {
		cout << " enter the another month" << endl;
		cin >> month2;
		if (month2 < 0 || month2 >12) {
			cout << "you cant enter the month bigger than 12 and smaller than 0." << endl;
			x = 'X';
		}
		else {
			x = 'N';
		}
	} while (x != 'N');
	cout << " enter the another day" << endl;
	cin >> day2;
	cout << " enter the another year" << endl;
	cin >> year2;
	date date2(month2, day2, year2);
	date2.setmonthDay(month2);
	
	if ( day2 > date2.getmonthDay() || day < 0) {
		cout << "you cant enter the day bigger than month's day" << endl;
		date2.changeDay();
		x = 'X';
	}

	do {
		cout << " are you want Prefix (D) and postfix(P) increment operators or not(N)?" << endl;
		cin >> chooice;
		if (chooice == 'D') {
			date2.operator--();
			//date2.setmonthName(month);
			cout << date2.getmonth();
			cout << " ";
			cout << date2.getday();
			cout << " ";
			cout << date2.getyear() << endl;
		}
		if (chooice == 'P') {
			date2.operator++();
			//date2.setmonthName(month);
			cout << date2.getmonth();
			cout << " ";
			cout << date2.getday();
			cout << " ";
			cout << date2.getyear() << endl;
		}
	} while (chooice != 'N');
	cout << "result of the Month :" << endl;
	cout << date1.coculaterMonth(date2)<< endl;
	cout << "result of the Day :" << endl;
	cout << date1.coculaterDay(date2) << endl;
	cout << "result of the Year :" << endl;
	cout << date1.coculaterYear(date2) << endl;
	
}