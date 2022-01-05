#include<iostream>
#include<string>
int i = 1;
//设计一个圆类 求周长
using namespace std;
//const double pi = 3.14;
//设计一个类
//

struct C0 
{

	int s0;



};

class C1
{
	int d1;



};

class Person
{
public:
	//设置姓名
	void setName(string wname)
	{
		name = wname;

	}
	string getname()
	{
		return name;
	}
	int getage()
	{
		int age = 0;
		return age;

	}
	void setyp(string yp1)
	{
		yp = yp1;
	}
private:
	//R/W
	string name;
	// R
	int age;
	// W
	string yp;



};





int main()
{
	//实例化
	Person p;
	string name;
	cin >> name;
	p.setName(name);
	cout << p.getname();

	cout << p.getage();
	p.setyp("123");













	//通过圆类 创建具体对象
	//实例化一个对象
	system("pause");
	return 0;

}


//Stu s1;

//cout << "输入学生1学号：" << endl;
//cin >> s1.xh;
//cout << "输入学生1姓名：" << endl;
//cin >> s1.name;
////s1.show();
//Stu s2;
//cout << "输入学生2学号：" << endl;
//cin >> s2.xh;
//cout << "输入学生2姓名：" << endl;
//cin >> s2.name;
////s2.show();
////cout << "圆的周长：" << cl.calculate() << endl;
//class Stu
	//{
	//	//保护权限
	//protected:
	//	string card;
	//	//访问权限
	//private:
	//	string py;
	//	//void show()
	//	//{
	//	//	cout << "学生" << i << "姓名：" << name << endl;
	//	//	cout << "学生" << i << "学号：" << xh << endl;
	//	//	i++;
	//	//}
	//
	//public:    //公共权限
	//	//属性
	//	int xh;
	//	string name = "";
	//
	//	//行为
	//	//获取圆的周长
	//	//void show()
	//	//{
	//	//	cout << "学生" << i << "姓名：" << name << endl;
	//	//	cout << "学生" << i << "学号：" << xh << endl;
	//	//	i++;
	//	//}
	//};
