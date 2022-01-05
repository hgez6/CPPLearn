#include<iostream>
#include<string>
int i = 1;
//设计一个圆类 求周长
using namespace std;
//const double pi = 3.14;
//设计一个类
class Stu
{
	//保护权限
protected:
	string card;
	//访问权限
private:
	string py;
	//void show()
	//{
	//	cout << "学生" << i << "姓名：" << name << endl;
	//	cout << "学生" << i << "学号：" << xh << endl;
	//	i++;
	//}

public:    //公共权限
	//属性
	int xh;
	string name = "";

	//行为
	//获取圆的周长
	//void show()
	//{
	//	cout << "学生" << i << "姓名：" << name << endl;
	//	cout << "学生" << i << "学号：" << xh << endl;
	//	i++;
	//}
};


int main()
{
	//通过圆类 创建具体对象
	//实例化一个对象
	Stu s1;

	cout << "输入学生1学号：" << endl;
	cin >> s1.xh;
	cout << "输入学生1姓名：" << endl;
	cin >> s1.name;
	s1.show();
	Stu s2;
	cout << "输入学生2学号：" << endl;
	cin >> s2.xh;
	cout << "输入学生2姓名：" << endl;
	cin >> s2.name;
	s2.show();
	//cout << "圆的周长：" << cl.calculate() << endl;
	system("pause");
	return 0;

}