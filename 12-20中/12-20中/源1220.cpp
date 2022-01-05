#include<iostream>
#include<string>
using namespace std;

//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/

void swap(int n1, int n2);
int main()
{
	//double a[][2] = {
	//1,2,3,4
	//};

	//cout << "空间为:" << sizeof(a);
	//cout << endl;
	//cout << "每行数字空间为:" << sizeof(*a);
	//cout << endl;
	//cout << "每列个数:" << sizeof(a)/ sizeof(*a);
	//cout << endl;
	//cout << "总元素个数:" << sizeof(a) / sizeof(**a);
	//cout << endl;
	//cout << "存放的地址空间:" << a;
	//cout << endl;
	//cout << "存放的第一行地址空间:" << *a;
	//cout << endl;
	//cout << "存放的第2行地址空间:" << *(a+1);
	//cout << endl;
	//cout << "存放的第2个元素地址空间:" << &a[0][1];
	//cout << endl;

	
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int b = 0; b < 2; b++)

	//	cout << a[i][b] << "  ";

	//	cout << endl;
	//}
	int a = 10, b = 66;
	swap(a, b);
	cout << "实参a的值:" << a << "实参b的值:" << b;

	system("pause");
	return 0;





}
void swap(int n1, int n2)
{

	cout << "传递前:" << n1 << " " << n2;
	int temp = n2;
	n2 = n1;
	n1 = temp;
	cout << "传递后:" << n1 << " " << n2;

}