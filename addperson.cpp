#include<iostream>
#include"contect.h"
using namespace std;

void addperson(addbook* abs) 
{
	if (abs->size > max_person)
	{
		cout << "ͨѶ¼�������޷����,������ѡ��" << endl;
		return;
	}
	else
	{
		cout << "����ͨѶ¼��Ա���䣺"<<endl;
		cin >> abs->perarray[abs->size].age;
		cout << "����ͨѶ¼��Ա������"<<endl;
		cin >> abs->perarray[abs->size].name;
		cout << "����ͨѶ¼��Ա�Ա�"<<endl;
		cin >> abs->perarray[abs->size].sex;
		cout << "����ͨѶ¼��Ա�绰���룺"<<endl;
		cin >> abs->perarray[abs->size].phonenum;
		cout << "����ͨѶ¼��Ա��ַ��"<<endl;
		cin >> abs->perarray[abs->size].address;
		
	}

	
}