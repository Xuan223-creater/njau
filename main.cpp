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
	cout << "��ѡ����Ҫ���е����㣺" << endl;
	cout << "1���ӷ�" << "\n" << "2������" << "\n" << "3���˷�" << "\n" << "4������" << "\n" << "5��ȡģ" << endl;
	cout << "********************************" << endl;
	cout << "********************************" << endl;

	cin >> choice;
	cout << "������������ֵ:" << endl;
	cin >> a >> b;
	Calculate Cal(a, b);
	if (!isAppropriate(a, b, choice)) {
		exit(1);
	}
	switch (choice) {
	case 1://�ӷ�
		cout << Cal.Add() << endl;
		break;
	case 2://����
		cout << Cal.Sub() << endl;
		break;
	case 3://�˷�
		cout << Cal.Mul() << endl;
		break;
	case 4://����
		cout << Cal.Div() << endl;
		break;
	case 5://ȡģ
		cout << Cal.Mod() << endl;
		break;
	}
	return 0;
}

