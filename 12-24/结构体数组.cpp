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

//struct stu s1;
//ͨ����������
//stu s2 = { "��2",24,35 };
int main()
{   

	struct stu stuarry[3] =
	{
		{"����",324,43},
		{"��4",320,6},
		{"��5",32,4},


	};
	stuarry[0].name = "����";
	for (int i = 0; i < 3; i++)
	{
		cout << "���� " << stuarry[i].name
			<< "���� " << stuarry[i].age
			<< "�ɼ�  " << stuarry[i].score << endl;

	}
	//ָ��ͺ���
	//s1.name = "��1";
	//s1.age = 12;
	//s1.score = 9;
	//cout << "���� " << s1.name << "���� " << s1.age << "�ɼ� " << s1.score << endl;
	//cout << "���� " << s2.name << "���� " << s2.age << "�ɼ� " << s2.score;
	system("pause");
	return 0;





}

