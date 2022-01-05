#include<iostream>
using namespace std;
short num1 = 32768;
int num2 = 32769;
int num3 = 10;
long long num4 = 20;
//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/
#define Day 7

int main()
{
	//单精度
	float a = 3e-3; //6位有效数字




	//int a = 20;
	//const int a = 10;
	//a = 12;
	cout << "day= " <<Day  << endl;
	cout << "空间f a= " << sizeof(a)  << endl;
	cout << " a= " << a << endl;
	cout << "空间double= " << sizeof(double) << endl;
	cout << "1= " << num1 << endl;
	cout << "空间1= " << sizeof(num1) << endl;
	cout << "空间2= " << sizeof(num2) << endl;
	cout << "空间3= " << sizeof(num3) << endl;
	cout << "空间4= " << sizeof(num4) << endl;
	cout << "2= " << num2 << endl;
	cout << "3= " << num3 << endl;
	cout << "4= " << num4 << endl;
	system("pause");
	return 0;
 




}
