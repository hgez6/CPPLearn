#include<iostream>
#include<string>
using namespace std;

//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/
void bubble(int* a, int len)
{
	for (int i = 0; i < len - 1; i++)
	{

		for (int j = 0; j < len - i - 1; j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				int t = *(a + j);
				*(a + j + 1) = *(a + j);
				*(a + j) = t;
			}
		}
		cout << *(a + i) << " " ;

	}

}

int main()
{
	//ָ��ͺ���

	int a[] = { 2,45,56,43536,556,75 };
	int l = sizeof(a) / sizeof(*a);
	bubble(a, l);






	system("pause");
	return 0;





}

