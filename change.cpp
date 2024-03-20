#include<iostream>
#include"contect.h"
using namespace std;


void change_p(addbook* abs) 
{
	int choose;
	bool flag = true;
	display(abs);
	cout << "请输入要修改的联系人序号" << endl;
	while (flag) 
	{
		cin >> choose;

		if (choose-1 < abs->size || choose > 0)
		{
			cout << "输入通讯录人员年龄：" << endl;
			cin >> abs->perarray[choose-1].age;
			cout << "输入通讯录人员姓名：" << endl;
			cin >> abs->perarray[choose - 1].name;
			cout << "输入通讯录人员性别：" << endl;
			cin >> abs->perarray[choose - 1].sex;
			cout << "输入通讯录人员电话号码：" << endl;
			cin >> abs->perarray[choose - 1].phonenum;
			cout << "输入通讯录人员地址：" << endl;
			cin >> abs->perarray[choose - 1].address;
			flag = false;
		}
		else 
		{
			cout << "无此联系人，请重新输入！！" << endl;
		}
	}
}