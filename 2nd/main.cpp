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
	int year(0);
	int month(0);

	std::cout << "Enter your age: ";
	std::cin >> year;
	month = yearTomonth(year);
	std::cout << "your age in month is "
			<< month << "." << std::endl;
	
	return 0;
}
