#include<iostream>
#include<string>
#include<ctime>

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
	struct stu s[5];

};
//��ӡ��Ϣ�ĺ���
//void printstu(struct teacher t)
//{
//	t.s.name = "������";
//	cout << "��ʦ�ṹ����ѧ�������֣�ֵ���ݣ� " << t.s.name << endl;
//
//}

//void printstu2(const struct teacher* p)
//{
//	//p->s.name = "���ǵ�ַ������";  //��Ȼ����Ƕ��������.�����ǵ�ַ����
//	p = ;
//	cout << "��ʦ�ṹ����ѧ�������֣���ַ���ݣ� " << p->s.name << endl;  //Ƕ�׽ṹ��ָ��ڶ���Ҫ��.
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
		cout << "��ʦ���� " << t[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������ " << t[i].s[j].name<<endl;
			cout << "\tѧ������ " << t[i].s[j].age << endl;
			cout << "\tѧ���ɼ� " << t[i].s[j].score << endl;



		}

	}

}

//struct stu s1;
//ͨ����������
int main()
{
	srand((unsigned int)time(NULL));  //���������
	teacher t[3];
	int len = sizeof(t) / sizeof(*t);
	//t[0].age = 1;
	//t[0].name = "����";
	//t[0].score = 66;
	//t[0].s.age = 16;
	//t[0].s.name = "������ʦ��ѧ��";
	//cout << "���� " << t.s.age 
	//<<
	//t.name <<
	//t.score 
	//;
	allocate(t, len);
	printts(t, len);




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
