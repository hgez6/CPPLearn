#include<iostream>
#include<string>
using namespace std;

//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/


int main()
{   
	//float a=10.4354;
	int a = 20;
	int b = 9;
	int a1 = ++a * 3;
	int a2 = b++ * 3;
	////bool类
	//bool f = 1;

	//char ch1 = 'a'; //只能是输出1个字节默认最后一个

	char str[] = "ch1= ksldk";  //加中括号 双
	cout << "赋值 =" << endl;
	//cin >> s;
	//除了0都为真
	cout << !!a1 << endl;
	//cout << a2 << endl;

	//cout << "\\" << endl;
	//cout << "ch1=sad\t ksldk" << endl;
	//cout << "ch1=sdaasd\t ksldk" << endl;


	//cout << "ch1= " <<sizeof(ch1)  << endl;
	system("pause");
	return 0;





}
