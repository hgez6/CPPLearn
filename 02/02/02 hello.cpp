#include<iostream>
using namespace std;
short num1 = 32768;
int num2 = 32769;
int num3 = 10;
long long num4 = 20;
//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/
#define Day 7

int main()
{
	//������
	float a = 3e-3; //6λ��Ч����




	//int a = 20;
	//const int a = 10;
	//a = 12;
	cout << "day= " <<Day  << endl;
	cout << "�ռ�f a= " << sizeof(a)  << endl;
	cout << " a= " << a << endl;
	cout << "�ռ�double= " << sizeof(double) << endl;
	cout << "1= " << num1 << endl;
	cout << "�ռ�1= " << sizeof(num1) << endl;
	cout << "�ռ�2= " << sizeof(num2) << endl;
	cout << "�ռ�3= " << sizeof(num3) << endl;
	cout << "�ռ�4= " << sizeof(num4) << endl;
	cout << "2= " << num2 << endl;
	cout << "3= " << num3 << endl;
	cout << "4= " << num4 << endl;
	system("pause");
	return 0;
 




}
