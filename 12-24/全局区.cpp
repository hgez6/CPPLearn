#include<iostream>
#include<string>
using namespace std;
int a;
int b;
const int b1=0;
const int b2=0;
//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/


int main()
{
	int c=0;
	int d=0;
	cout << "局部变量c地址" << (int) & c << endl;
	cout << "局部变量d地址" << (int)&d << endl;

	cout << "全变量a地址" << (int)&a << endl;
	cout << "全变量b地址" << (int)&b << endl;
	static int s_a = 0;
	static int s_b = 0;
	const int c_l_a = 0;
	const int c_l_b = 0;
	cout << "静态变量a地址" << (int)&s_a << endl;
	cout << "静态量b地址" << (int)&s_b << endl;
	cout << "字符串常量b地址" << (int)&"b"<< endl;
	cout << "全局常量b1地址" << (int)&b1 << endl;
	cout << "全局常量b2地址" << (int)&b2 << endl;
	cout << "全局常量b1地址" << (int)&b1 << endl;
	cout << "全局常量b2地址" << (int)&b2 << endl;
	cout << "局部常量a地址" << (int)&c_l_a << endl;
	cout << "局部常量b地址" << (int)&c_l_b << endl;
	//指针和函数
	system("pause");
	return 0;





}

