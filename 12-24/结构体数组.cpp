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

//struct stu s1;
//通过点来访问
//stu s2 = { "张2",24,35 };
int main()
{   

	struct stu stuarry[3] =
	{
		{"张三",324,43},
		{"张4",320,6},
		{"张5",32,4},


	};
	stuarry[0].name = "朝气";
	for (int i = 0; i < 3; i++)
	{
		cout << "名字 " << stuarry[i].name
			<< "年龄 " << stuarry[i].age
			<< "成绩  " << stuarry[i].score << endl;

	}
	//指针和函数
	//s1.name = "张1";
	//s1.age = 12;
	//s1.score = 9;
	//cout << "名字 " << s1.name << "年龄 " << s1.age << "成绩 " << s1.score << endl;
	//cout << "名字 " << s2.name << "年龄 " << s2.age << "成绩 " << s2.score;
	system("pause");
	return 0;





}

