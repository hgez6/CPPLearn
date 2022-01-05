#include<iostream>
#include<string>
using namespace std;

//1.单行注释
//2.多行注释
/*
	main是程序的入口每个程序有且只有
	一个main

*/
struct stu
{
	//成员列表
	//年龄
	string name;
	int age;
	int score;

};


struct teacher
{
	//成员列表
	//年龄
	string name;
	int age;
	int score;
	//struct student stu;
	struct stu s;

};
//打印信息的函数
void printstu(struct teacher t)
{	
	t.s.name = "无名氏";
	cout << "老师结构体下学生的名字（值传递） " << t.s.name<<endl;

}

void printstu2(struct teacher *p)
{	
	p->s.name = "还是地址传递吗";  //虽然在子嵌套中用了.但还是地址传递
	cout << "老师结构体下学生的名字（地址传递） " << p->s.name << endl;  //嵌套结构体指针第二个要用.

}


//struct stu s1;
//通过点来访问
int main()
{
	teacher t;
	t.age = 1;
	t.name = "咯是";
	t.score = 66;
	t.s.age = 16;
	t.s.name = "我是老师的学生";
	printstu(t);
	printstu2(&t);
	//cout << "名字 " << t.s.age 
	//<<
	//t.name <<
	//t.score 
	//;

	cout << "老师结构体下学生的名字 " << t.s.name << endl;




	system("pause");
	return 0;





}

//stu s2 = { "张2",24,35 };

//stu* p = &s2;
//cout << "名字 " << p->name
//	<< "年龄 " << p->age
//	<< "成绩 " << p->score << endl;

//struct stu stuarry[3] =
//{
//	{"张三",324,43},
//	{"张4",320,6},
//	{"张5",32,4},


//};
//stuarry[0].name = "朝气";
//for (int i = 0; i < 3; i++)
//{
//	cout << "名字 " << stuarry[i].name
//		<< "年龄 " << stuarry[i].age
//		<< "成绩  " << stuarry[i].score << endl;

//}
//
//指针和函数
//s1.name = "张1";
//s1.age = 12;
//s1.score = 9;
//cout << "名字 " << s1.name << "年龄 " << s1.age << "成绩 " << s1.score << endl;
//cout << "名字 " << s2.name << "年龄 " << s2.age << "成绩 " << s2.score;
