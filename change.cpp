#include<iostream>
#include"contect.h"
using namespace std;


void change_p(addbook* abs) 
{
	int choose;
	bool flag = true;
	display(abs);
	cout << "������Ҫ�޸ĵ���ϵ�����" << endl;
	while (flag) 
	{
		cin >> choose;

		if (choose-1 < abs->size || choose > 0)
		{
			cout << "����ͨѶ¼��Ա���䣺" << endl;
			cin >> abs->perarray[choose-1].age;
			cout << "����ͨѶ¼��Ա������" << endl;
			cin >> abs->perarray[choose - 1].name;
			cout << "����ͨѶ¼��Ա�Ա�" << endl;
			cin >> abs->perarray[choose - 1].sex;
			cout << "����ͨѶ¼��Ա�绰���룺" << endl;
			cin >> abs->perarray[choose - 1].phonenum;
			cout << "����ͨѶ¼��Ա��ַ��" << endl;
			cin >> abs->perarray[choose - 1].address;
			flag = false;
		}
		else 
		{
			cout << "�޴���ϵ�ˣ����������룡��" << endl;
		}
	}
}