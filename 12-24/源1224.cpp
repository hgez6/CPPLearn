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


}s1;
//struct stu s1;
//ͨ����������
 stu s2 = {"��2",24,35};
int main()
{
	//ָ��ͺ���
	s1.name = "��1";
    s1.age = 12; 
	s1.score = 9;
	cout << "���� " << s1.name<<"���� "<< s1.age<<"�ɼ� "<< s1.score<<endl;
	cout << "���� " << s2.name << "���� " << s2.age << "�ɼ� " << s2.score;
	system("pause");
	return 0;





}

