#include<iostream>
#include<string>
int i = 1;
//���һ��Բ�� ���ܳ�
using namespace std;
//const double pi = 3.14;
//���һ����
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
	//��������
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
	//ʵ����
	Person p;
	string name;
	cin >> name;
	p.setName(name);
	cout << p.getname();

	cout << p.getage();
	p.setyp("123");













	//ͨ��Բ�� �����������
	//ʵ����һ������
	system("pause");
	return 0;

}


//Stu s1;

//cout << "����ѧ��1ѧ�ţ�" << endl;
//cin >> s1.xh;
//cout << "����ѧ��1������" << endl;
//cin >> s1.name;
////s1.show();
//Stu s2;
//cout << "����ѧ��2ѧ�ţ�" << endl;
//cin >> s2.xh;
//cout << "����ѧ��2������" << endl;
//cin >> s2.name;
////s2.show();
////cout << "Բ���ܳ���" << cl.calculate() << endl;
//class Stu
	//{
	//	//����Ȩ��
	//protected:
	//	string card;
	//	//����Ȩ��
	//private:
	//	string py;
	//	//void show()
	//	//{
	//	//	cout << "ѧ��" << i << "������" << name << endl;
	//	//	cout << "ѧ��" << i << "ѧ�ţ�" << xh << endl;
	//	//	i++;
	//	//}
	//
	//public:    //����Ȩ��
	//	//����
	//	int xh;
	//	string name = "";
	//
	//	//��Ϊ
	//	//��ȡԲ���ܳ�
	//	//void show()
	//	//{
	//	//	cout << "ѧ��" << i << "������" << name << endl;
	//	//	cout << "ѧ��" << i << "ѧ�ţ�" << xh << endl;
	//	//	i++;
	//	//}
	//};
