#include<iostream>
#include<string>
#include "标头.h"
using namespace std;

//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/


int main()
{

	int a = 6, b = 7;
	int * p= NULL;
	//p = &a;//记录a的地址
	cout << "sizeof(int *)" << sizeof(p) << endl;  //64位占用8个字节 32位4个字节内存
	cout << "sizeof(int *)" << sizeof(double *) << endl;
	cout << "sizeof(int *)" << sizeof(float*) << endl;
	cout << "sizeof(int *)" << sizeof(char*) << endl;


	cout << "a的地址" <<&a<< endl;
	cout << "指针p的地址" << p << endl;
	//cout << max(a, b) << endl;
    //解引用
	*p = 1000;
	cout << "a的数值" << a << endl;
	cout << "*p的数值" << *p << endl;

	system("pause");
	return 0;





}
//int a[] = { 0,1,2,98,49,56 };
	//int b = sizeof(*(a));
	////cout << b << endl;
	//int c = sizeof(a);
	////int temp = 0;
	////外层循环
	//cout << "排序前" << endl;
	//for (int i = 0; i < (c / b); i++)
	//	cout << *(a + i) << " " ;
	//   cout << endl;

	//for (int i = 0; i < (c / b); i++)
	//{   //内层
	//	for (int d = 0; d < (c / b) - i-1; d++)
	//	{
	//		if (*(a + d) > *(a + d+1))
	//		{   /*
	//			(a + i) = *(a + d);

	//			temp=*(a)*/
	//			int temp = *(a+d+1);
	//			*(a + d + 1) = *(a+d);
	//			*(a + d) = temp;


	//		}
	//		
	//	}
	//	
	//


	//}
	//cout << "排序后" << endl;
	//for (int i = 0; i < (c / b); i++)
	//cout << *(a + i) << " ";

