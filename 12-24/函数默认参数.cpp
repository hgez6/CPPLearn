#include<iostream>
#include<string>
using namespace std;

int func(int a, int b=9, int c=8)    //默认值
{


	return a + b + c;



}
int func2(int a, int b , int c =9)    //默认值
{


	return a + b + c;



}
//函数声明
int func3(int a=9, int b = 9, int c = 8);    //默认值
//函数实现 只能有一个默认参数
int func3(int a, int b , int c )
{


	return a + b + c;



}
//目前用不到占位参数
int func5(int a, int b, int=10 )
{


	return a + b ;



}



int main()
{


	cout << func3() << endl;
	cout << func5(2,3) << endl;
	cout << func(20, 80, 70) << endl;

system("pause");
return 0;





}