#include<iostream>
#include<string>
#include<ctime>
//���һ��Բ�� ���ܳ�
using namespace std;
const double pi = 3.14;
//���һ����
class Circle
{
	//����Ȩ��
public:    //����Ȩ��
   	//����
	int r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculate()
	{
		return 2 * pi * r;
	}
};


int main() 
{
	//ͨ��Բ�� �����������
	//ʵ����һ������
	Circle cl;
	cl.r = 10;
	cout << "Բ���ܳ���" << cl.calculate() << endl;
	system("pause");
	return 0;

}