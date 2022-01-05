#include<iostream>
#include<string>
using namespace std;
//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/

int *func()
{
	int *p=new int(10);   //new 返回的是该数据类型的指针
	//b = 100;
	//int a = 10;
	return p;

}
void test01() 
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//cout << *p << endl;

}
void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i + 100;
	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
	delete[] arr;


}


void swap(int a, int b)
{
	int temp=a;
	a = b;
	b = temp;


}
void swap1(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;


}

void  swap2(int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;



}
void  sv(const int& a)
{

	a = 1000;
	



}


int& t01()
{
	int a = 10;//栈区
	return a;

}

int& t02()
{
	static int a = 10;//全局区
	return a;

}
int main()
{
	int a3 = 90;
	const int& ref = 10;  //创建了一个临时变量
	sv(a3);
	int &a1 = t01();
	int &a2 = t02();

	//int a = 10,c=160;
	//swap2(a, c);
	//int& b=a;  //一定要初始化
	//b = c;
	cout << a3 << endl;
	cout << a2 << endl;
	t02() = 1890;
	cout << a2 << endl;

	cout << a2 << endl;

	//cout << a1 << endl;

	//cout << c << endl;
	//b = c;  //赋值操作并不是更改引用
	//cout << a << endl;
	//cout << b << endl;

	//test01();
	////int p = func(1);
	//test02();

	//指针和函数
	system("pause");
	return 0;





}

