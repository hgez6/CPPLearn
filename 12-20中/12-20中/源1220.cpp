#include<iostream>
#include<string>
using namespace std;

//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/

void swap(int n1, int n2);
int main()
{
	//double a[][2] = {
	//1,2,3,4
	//};

	//cout << "�ռ�Ϊ:" << sizeof(a);
	//cout << endl;
	//cout << "ÿ�����ֿռ�Ϊ:" << sizeof(*a);
	//cout << endl;
	//cout << "ÿ�и���:" << sizeof(a)/ sizeof(*a);
	//cout << endl;
	//cout << "��Ԫ�ظ���:" << sizeof(a) / sizeof(**a);
	//cout << endl;
	//cout << "��ŵĵ�ַ�ռ�:" << a;
	//cout << endl;
	//cout << "��ŵĵ�һ�е�ַ�ռ�:" << *a;
	//cout << endl;
	//cout << "��ŵĵ�2�е�ַ�ռ�:" << *(a+1);
	//cout << endl;
	//cout << "��ŵĵ�2��Ԫ�ص�ַ�ռ�:" << &a[0][1];
	//cout << endl;

	
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int b = 0; b < 2; b++)

	//	cout << a[i][b] << "  ";

	//	cout << endl;
	//}
	int a = 10, b = 66;
	swap(a, b);
	cout << "ʵ��a��ֵ:" << a << "ʵ��b��ֵ:" << b;

	system("pause");
	return 0;





}
void swap(int n1, int n2)
{

	cout << "����ǰ:" << n1 << " " << n2;
	int temp = n2;
	n2 = n1;
	n1 = temp;
	cout << "���ݺ�:" << n1 << " " << n2;

}