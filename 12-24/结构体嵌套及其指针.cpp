#include<iostream>
#include<string>
using namespace std;

//1.����ע��
//2.����ע��
/*
	main�ǳ�������ÿ����������ֻ��
	һ��main

*/
struct stu
{
	//��Ա�б�
	//����
	string name;
	int age;
	int score;

};


struct teacher
{
	//��Ա�б�
	//����
	string name;
	int age;
	int score;
	//struct student stu;
	struct stu s;

};
//��ӡ��Ϣ�ĺ���
void printstu(struct teacher t)
{	
	t.s.name = "������";
	cout << "��ʦ�ṹ����ѧ�������֣�ֵ���ݣ� " << t.s.name<<endl;

}

void printstu2(struct teacher *p)
{	
	p->s.name = "���ǵ�ַ������";  //��Ȼ����Ƕ��������.�����ǵ�ַ����
	cout << "��ʦ�ṹ����ѧ�������֣���ַ���ݣ� " << p->s.name << endl;  //Ƕ�׽ṹ��ָ��ڶ���Ҫ��.

}


//struct stu s1;
//ͨ����������
int main()
{
	teacher t;
	t.age = 1;
	t.name = "����";
	t.score = 66;
	t.s.age = 16;
	t.s.name = "������ʦ��ѧ��";
	printstu(t);
	printstu2(&t);
	//cout << "���� " << t.s.age 
	//<<
	//t.name <<
	//t.score 
	//;

	cout << "��ʦ�ṹ����ѧ�������� " << t.s.name << endl;




	system("pause");
	return 0;





}

//stu s2 = { "��2",24,35 };

//stu* p = &s2;
//cout << "���� " << p->name
//	<< "���� " << p->age
//	<< "�ɼ� " << p->score << endl;

//struct stu stuarry[3] =
//{
//	{"����",324,43},
//	{"��4",320,6},
//	{"��5",32,4},


//};
//stuarry[0].name = "����";
//for (int i = 0; i < 3; i++)
//{
//	cout << "���� " << stuarry[i].name
//		<< "���� " << stuarry[i].age
//		<< "�ɼ�  " << stuarry[i].score << endl;

//}
//
//ָ��ͺ���
//s1.name = "��1";
//s1.age = 12;
//s1.score = 9;
//cout << "���� " << s1.name << "���� " << s1.age << "�ɼ� " << s1.score << endl;
//cout << "���� " << s2.name << "���� " << s2.age << "�ɼ� " << s2.score;
