
#ifndef TMATH_H
#define TMATH_H
//���㲿��


class Calculate {
public:
    // ���캯��
    Calculate(long long a,long long b);


    // ��Ա����
    long long Mod();//ȡģ����
    long long Add();//�ӷ�����
    long long Div();//��������
    long long Sub();//��������
    long long Mul();//�˷�����

private:
    // ˽�г�Ա����
    long long a;
    long long b;
    long long result;
};

bool isAppropriate(long long a, long long b,int choice);

#endif // TMATH_H
