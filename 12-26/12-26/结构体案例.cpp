#include<iostream>
#include<string>
#include<ctime>

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
	struct stu s[5];

};
//打印信息的函数
//void printstu(struct teacher t)
//{
//	t.s.name = "无名氏";
//	cout << "老师结构体下学生的名字（值传递） " << t.s.name << endl;
//
//}

//void printstu2(const struct teacher* p)
//{
//	//p->s.name = "还是地址传递吗";  //虽然在子嵌套中用了.但还是地址传递
//	p = ;
//	cout << "老师结构体下学生的名字（地址传递） " << p->s.name << endl;  //嵌套结构体指针第二个要用.
//
//}
void allocate(struct teacher t[], int len)
{
	string nameabc = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		t[i].name = "tea_";
		t[i].name += nameabc[i];
		for (int j = 0; j < 5; j++)
		{			
			t[i].s[j].name = "stu_";
			t[i].s[j].name += nameabc[j];
			int random = rand() % 60 + 40;
			t[i].s[j].age = 18+j;
			t[i].s[j].score = random + j;
		}

	}

}
void printts(struct teacher t[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师名字 " << t[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名 " << t[i].s[j].name<<endl;
			cout << "\t学生年龄 " << t[i].s[j].age << endl;
			cout << "\t学生成绩 " << t[i].s[j].score << endl;



		}

	}

}

//struct stu s1;
//通过点来访问
int main()
{
	srand((unsigned int)time(NULL));  //随机数种子
	teacher t[3];
	int len = sizeof(t) / sizeof(*t);
	//t[0].age = 1;
	//t[0].name = "咯是";
	//t[0].score = 66;
	//t[0].s.age = 16;
	//t[0].s.name = "我是老师的学生";
	//cout << "名字 " << t.s.age 
	//<<
	//t.name <<
	//t.score 
	//;
	allocate(t, len);
	printts(t, len);




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
