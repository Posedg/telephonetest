#include<iostream>
#include"contect.h"
using namespace std;

//��ʾ�˵�����
void menu()
{
	cout << "***********************" << endl;
	cout << "*****1�������ϵ��*****" << endl;
	cout << "*****2����ʾ��ϵ��*****" << endl;
	cout << "*****3��ɾ����ϵ��*****" << endl;
	cout << "*****4��������ϵ��*****" << endl;
	cout << "*****5���޸���ϵ��*****" << endl;
	cout << "*****6�������ϵ��*****" << endl;
	cout << "*****0���˳�ͨѶ¼*****" << endl;
	cout << "***********************" << endl;
}

void findperson(addbook *abs) {
	string num;
	cout << "��������ϵ������" << endl;
	bool flag = true;
	
	while(flag)
	{
		cin >> num;
		for(int i = 0;i<abs->size;i++)
		{	
			if(abs->perarray[i].name == num)
			{
				cout << i + 1 << "-------";
				cout << abs->perarray[i].age << "|";
				cout << abs->perarray[i].name << "|";
				cout << abs->perarray[i].sex << "|";
				cout << abs->perarray[i].phonenum << "|";
				cout << abs->perarray[i].address << "|" << endl;
				flag = false;
				system("pause");
				break;
			}	
		}
		if(flag == true)
		{
		cout << "���޴�������������" << endl;
		cout << "��:wq�˳�" << endl;
		}
		if (num == "wq")
		{
			break;
		}
	}
}