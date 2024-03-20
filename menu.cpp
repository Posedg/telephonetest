#include<iostream>
#include"contect.h"
using namespace std;

//显示菜单界面
void menu()
{
	cout << "***********************" << endl;
	cout << "*****1、添加联系人*****" << endl;
	cout << "*****2、显示联系人*****" << endl;
	cout << "*****3、删除联系人*****" << endl;
	cout << "*****4、查找联系人*****" << endl;
	cout << "*****5、修改联系人*****" << endl;
	cout << "*****6、清空联系人*****" << endl;
	cout << "*****0、退出通讯录*****" << endl;
	cout << "***********************" << endl;
}

void findperson(addbook *abs) {
	string num;
	cout << "请输入联系人姓名" << endl;
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
		cout << "查无此人请重新输入" << endl;
		cout << "按:wq退出" << endl;
		}
		if (num == "wq")
		{
			break;
		}
	}
}