#include<iostream>
#include "t_math.h"


using namespace std;


int main()
{
	long long a = 0;
	long long b = 0;
	
	int choice = 0;

	cout << "Welcome!" << endl;
	cout << "********************************" << endl;
	cout << "********************************" << endl;
	cout << "请选择你要进行的运算：" << endl;
	cout << "1、加法" << "\n" << "2、减法" << "\n" << "3、乘法" << "\n" << "4、除法" << "\n" << "5、取模" << endl;
	cout << "********************************" << endl;
	cout << "********************************" << endl;

	cin >> choice;
	cout << "请输入两数的值:" << endl;
	cin >> a >> b;
	Calculate Cal(a, b);
	if (!isAppropriate(a, b, choice)) {
		exit(1);
	}
	switch (choice) {
	case 1://加法
		cout << Cal.Add() << endl;
		break;
	case 2://减法
		cout << Cal.Sub() << endl;
		break;
	case 3://乘法
		cout << Cal.Mul() << endl;
		break;
	case 4://除法
		cout << Cal.Div() << endl;
		break;
	case 5://取模
		cout << Cal.Mod() << endl;
		break;
	}
	return 0;
}

