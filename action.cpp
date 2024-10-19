#include "t_math.h"
#include<climits>
#include<stdexcept>

// ���캯��
Calculate::Calculate(long long a, long long b) : a(a), b(b), result(0) {}

// ȡģ����
long long Calculate::Mod() {
    result = a % b;
    return result;
}

// �ӷ�����
long long Calculate::Add() {
    result = a + b;
    return result;
}

// ��������
long long Calculate::Div() {

    result = a / b;
    return result;
}

// ��������
long long Calculate::Sub() {
    result = a - b;
    return result;
}

// �˷�����
long long Calculate::Mul() {
    result = a * b;
    return result;
}


bool isAppropriate(long long a, long long b, int choice) {
	if (choice == 1 && a + b > LLONG_MAX) {
		throw std::runtime_error("The sum is larger than the maximum");
		return false;
	}
	else if (choice == 2 && a - b < LLONG_MIN) {
		throw std::runtime_error("The sub result is lower than the minimum");
		return false;
	}
	else if (choice == 3 && a * b > LLONG_MAX) {
		throw std::runtime_error("The product is larger than the max");
		return false;
	}
	else if (choice == 4 && b == 0) {
		throw std::runtime_error("Division By zero");
		return false;
	}
	return true;
};