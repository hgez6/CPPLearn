#include<iostream>
#include<string>
using namespace std;
int a;
int b;
const int b1=0;
const int b2=0;
//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/


int main()
{
	int c=0;
	int d=0;
	cout << "�ֲ�����c��ַ" << (int) & c << endl;
	cout << "�ֲ�����d��ַ" << (int)&d << endl;

	cout << "ȫ����a��ַ" << (int)&a << endl;
	cout << "ȫ����b��ַ" << (int)&b << endl;
	static int s_a = 0;
	static int s_b = 0;
	const int c_l_a = 0;
	const int c_l_b = 0;
	cout << "��̬����a��ַ" << (int)&s_a << endl;
	cout << "��̬��b��ַ" << (int)&s_b << endl;
	cout << "�ַ�������b��ַ" << (int)&"b"<< endl;
	cout << "ȫ�ֳ���b1��ַ" << (int)&b1 << endl;
	cout << "ȫ�ֳ���b2��ַ" << (int)&b2 << endl;
	cout << "ȫ�ֳ���b1��ַ" << (int)&b1 << endl;
	cout << "ȫ�ֳ���b2��ַ" << (int)&b2 << endl;
	cout << "�ֲ�����a��ַ" << (int)&c_l_a << endl;
	cout << "�ֲ�����b��ַ" << (int)&c_l_b << endl;
	//ָ��ͺ���
	system("pause");
	return 0;





}

