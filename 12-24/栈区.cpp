#include<iostream>
#include<string>
using namespace std;
//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/

int *func()
{
	int *p=new int(10);   //new ���ص��Ǹ��������͵�ָ��
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
	int a = 10;//ջ��
	return a;

}

int& t02()
{
	static int a = 10;//ȫ����
	return a;

}
int main()
{
	int a3 = 90;
	const int& ref = 10;  //������һ����ʱ����
	sv(a3);
	int &a1 = t01();
	int &a2 = t02();

	//int a = 10,c=160;
	//swap2(a, c);
	//int& b=a;  //һ��Ҫ��ʼ��
	//b = c;
	cout << a3 << endl;
	cout << a2 << endl;
	t02() = 1890;
	cout << a2 << endl;

	cout << a2 << endl;

	//cout << a1 << endl;

	//cout << c << endl;
	//b = c;  //��ֵ���������Ǹ�������
	//cout << a << endl;
	//cout << b << endl;

	//test01();
	////int p = func(1);
	//test02();

	//ָ��ͺ���
	system("pause");
	return 0;





}

