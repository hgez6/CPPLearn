#include<iostream>
#include<string>
#include "��ͷ.h"
using namespace std;

//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/


int main()
{

	int a = 6, b = 7;
	int * p= NULL;
	//p = &a;//��¼a�ĵ�ַ
	cout << "sizeof(int *)" << sizeof(p) << endl;  //64λռ��8���ֽ� 32λ4���ֽ��ڴ�
	cout << "sizeof(int *)" << sizeof(double *) << endl;
	cout << "sizeof(int *)" << sizeof(float*) << endl;
	cout << "sizeof(int *)" << sizeof(char*) << endl;


	cout << "a�ĵ�ַ" <<&a<< endl;
	cout << "ָ��p�ĵ�ַ" << p << endl;
	//cout << max(a, b) << endl;
    //������
	*p = 1000;
	cout << "a����ֵ" << a << endl;
	cout << "*p����ֵ" << *p << endl;

	system("pause");
	return 0;





}
//int a[] = { 0,1,2,98,49,56 };
	//int b = sizeof(*(a));
	////cout << b << endl;
	//int c = sizeof(a);
	////int temp = 0;
	////���ѭ��
	//cout << "����ǰ" << endl;
	//for (int i = 0; i < (c / b); i++)
	//	cout << *(a + i) << " " ;
	//   cout << endl;

	//for (int i = 0; i < (c / b); i++)
	//{   //�ڲ�
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
	//cout << "�����" << endl;
	//for (int i = 0; i < (c / b); i++)
	//cout << *(a + i) << " ";

