#include<iostream>
#include<string>
int i = 1;
//���һ��Բ�� ���ܳ�
using namespace std;
//const double pi = 3.14;
//���һ����
class Stu
{
	//����Ȩ��
protected:
	string card;
	//����Ȩ��
private:
	string py;
	//void show()
	//{
	//	cout << "ѧ��" << i << "������" << name << endl;
	//	cout << "ѧ��" << i << "ѧ�ţ�" << xh << endl;
	//	i++;
	//}

public:    //����Ȩ��
	//����
	int xh;
	string name = "";

	//��Ϊ
	//��ȡԲ���ܳ�
	//void show()
	//{
	//	cout << "ѧ��" << i << "������" << name << endl;
	//	cout << "ѧ��" << i << "ѧ�ţ�" << xh << endl;
	//	i++;
	//}
};


int main()
{
	//ͨ��Բ�� �����������
	//ʵ����һ������
	Stu s1;

	cout << "����ѧ��1ѧ�ţ�" << endl;
	cin >> s1.xh;
	cout << "����ѧ��1������" << endl;
	cin >> s1.name;
	s1.show();
	Stu s2;
	cout << "����ѧ��2ѧ�ţ�" << endl;
	cin >> s2.xh;
	cout << "����ѧ��2������" << endl;
	cin >> s2.name;
	s2.show();
	//cout << "Բ���ܳ���" << cl.calculate() << endl;
	system("pause");
	return 0;

}