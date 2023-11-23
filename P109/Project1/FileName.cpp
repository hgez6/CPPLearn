#include<iostream>

using namespace std;

//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/
class Person {
public: 
	Person() 
	{
		cout << "Person的默认构造函数调用 " << endl;
	}
	
	~Person()
	{
		cout << "Person的默认析构函数调用 " << endl;

	}




};
int main()
{
	

	system("pause");
	return 0;





}


