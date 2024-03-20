#include<iostream>
#include"contect.h"
using namespace std;

void addperson(addbook* abs) 
{
	if (abs->size > max_person)
	{
		cout << "通讯录已满，无法添加,请重新选择" << endl;
		return;
	}
	else
	{
		cout << "输入通讯录人员年龄："<<endl;
		cin >> abs->perarray[abs->size].age;
		cout << "输入通讯录人员姓名："<<endl;
		cin >> abs->perarray[abs->size].name;
		cout << "输入通讯录人员性别："<<endl;
		cin >> abs->perarray[abs->size].sex;
		cout << "输入通讯录人员电话号码："<<endl;
		cin >> abs->perarray[abs->size].phonenum;
		cout << "输入通讯录人员地址："<<endl;
		cin >> abs->perarray[abs->size].address;
		
	}

	
}