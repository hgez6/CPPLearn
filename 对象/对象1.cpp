#include<iostream>
#include<string>
#include<ctime>
//设计一个圆类 求周长
using namespace std;
const double pi = 3.14;
//设计一个类
class Circle
{
	//访问权限
public:    //公共权限
   	//属性
	int r;
	//行为
	//获取圆的周长
	double calculate()
	{
		return 2 * pi * r;
	}
};


int main() 
{
	//通过圆类 创建具体对象
	//实例化一个对象
	Circle cl;
	cl.r = 10;
	cout << "圆的周长：" << cl.calculate() << endl;
	system("pause");
	return 0;

}