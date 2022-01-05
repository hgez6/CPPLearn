#include<iostream>
#include<string>
using namespace std;

//重载的满足条件

int func5(int  a, double b)
{


	return a+b ;



}

void func5(double  a, int b)
{


	cout <<"jdas " << endl;




}


int main()
{


	cout << func5(20.34,89) << endl;

	system("pause");
	return 0;





}