//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int date, month, year, currentdate=0, difference, yeardifference;
//	cout << "Enter Year between 1900 and 2500: ";
//	cin >> year;
//	cout << "Enter Month using a number  between 1 and 12: ";
//	cin >> month; 
//	cout << "Enter the Date betweem 1 and 31: ";
//	cin >> date;
//
//	if (currentdate > 2014) {
//		difference = currentdate - 2014;
//	}
//	else {
//		difference = 2014 - currentdate;
//	}
//
//	if (year > 2000) {
//		yeardifference = year - 2000;
//	}
//	else {
//		yeardifference = 2000 - year;
//	}
//
//	difference = difference + (yeardifference / 4);
//	if (difference % 7 == 0) {
//		cout << "The day will be Sunday.";
//	}
//	else if (difference % 7 == 1) {
//		cout << "The day will be Saturday.";
//	}
//	else if (difference % 7 == 2) {
//		cout << "The day will be Friday.";
//	}
//	else if (difference % 7 == 3) {
//		cout << "The day will be Thursday.";
//	}
//	else if (difference % 7 == 4) {
//		cout << "The day will be Wednesday.";
//	}
//	else if (difference % 7 == 5) {
//		cout << "The day will be Tuesday.";
//	}
//	else {
//		cout << "The day will be Monday.";
//	}
//	return 0;  
//}