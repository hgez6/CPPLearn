#include<iostream>
#include<string>
using namespace std;

//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/


int main()
{
//	int F=0;
//
//
//	cout << "1" << endl;
//	cout << "2" << endl;
//	goto F;
//	cout << "3" << endl;
//	cout << "4" << endl;
//
//F:
//	cout << F << endl;
//
//	for (int i=1;i<10 ;i++ )
//	{
//		//cout << i ;
//		if (i % 3 == 0)
//			continue;
//
//		cout<< i<<endl;
	//}
	int a[] = {0,1,2,98,49,56};
	int b = sizeof(*(a));
	cout << b << endl;
	int c=sizeof(a);
	cout << c << endl;
	cout <<"���������׵�ַΪ"<<  (int)a << endl;
	cout << "�����׵�ַΪ " << &a[0] << *a << endl;


	//a[0] = 0;
	//a[1] = 1;
	//a[2] = 2;
	//a[3] = 3;
	for(int i=0;i<(c / b);i++)
			cout<< *(a+i) << endl;







			
				
	


	
	system("pause");
	return 0;





}
