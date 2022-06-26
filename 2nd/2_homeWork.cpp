#include <iostream>

//2.1：编写一个C++程序，用于显示你的姓名和地址。
void showName() {
	std::cout << "Name：Yhome Chou"
		<< std::endl
		<< "Adress: SZ city GD provice"
		<< std::endl;
}

//2.2：编写一个程序，他要求用户输入一个以long为单位的距离，然后将他转换为码（1 long 等于200码）。
int long_to_ma(int num) {
	return (num * 200);
}

/*2.3:编写一个C++程序，它使用3个用户定义的函数（包括main()）,并生成下面的输出。
*	Three bline mice
*	Three bline mice
*	See how they run
*	See how they run
* 其中一个函数要调用两次，该函数生成前两行：另一个函数也调用两次，读函数生成其余的输出。
*/
void one_2_3() {
	std::cout << "Three bline mice" << std::endl;
}

void two_2_3() {
	std::cout << "See how they run" << std::endl;
}

/*2.4:编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
*	Enter your age: 29
*	Your age in months is 384.
*/
int yearTomonth(int nyear){
	return nyear * 12;
}