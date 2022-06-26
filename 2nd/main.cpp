#include <iostream>
#include "2_homeWork.h"



int main() {
//-----------------------2.1-----------------------//
	//showName();

//-----------------------2.2-----------------------//
#if 0
	int lon, ma;
	lon = ma = 0;
	std::cout << "Please input a number: ";
	std::cin >> lon;
	ma = long_to_ma(lon);
	std::cout << ma << std::endl;
#endif
//-----------------------2.3-----------------------//
#if 0
	one_2_3();
	one_2_3();
	two_2_3();
	two_2_3();
#endif
//-----------------------2.4-----------------------//
#if 0	
	int year(0);
	// int month(0);

	std::cout << "Enter your age: ";
	std::cin >> year;
	// month = yearTomonth(year);
	std::cout << "your age in month is "
			<< yearTomonth(year) << "." << std::endl;
#endif
//-----------------------2.5-----------------------//
#if 0
	doule csd;
	std::cout << "Please enter a celsius value: ";
	std::cin >> csd;
	std::cout << csd << " degree Celesius is " 
			<< cTof(csd) << " degrees Fatrenheit."
			<< std::endl;
#endif
//-----------------------2.6-----------------------//
#if 1
	double ly;
	std::cout << "Enter the number of light years: ";
	std::cin >> ly;
	std::cout << ly << " light years = " 
			<< ly * 63240 << " astronmical units." 
			<< std::endl;
#endif
	return 0;
}
