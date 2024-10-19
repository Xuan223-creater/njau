
#ifndef TMATH_H
#define TMATH_H
//计算部分


class Calculate {
public:
    // 构造函数
    Calculate(long long a,long long b);


    // 成员函数
    long long Mod();//取模运算
    long long Add();//加法运算
    long long Div();//除法运算
    long long Sub();//减法运算
    long long Mul();//乘法运算

private:
    // 私有成员变量
    long long a;
    long long b;
    long long result;
};

bool isAppropriate(long long a, long long b,int choice);

#endif // TMATH_H
