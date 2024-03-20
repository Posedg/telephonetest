#include<iostream>
#include<string>
using namespace std;
#include"contect.h"


int main() 
{
	addbook abs;
	abs.size = 0;
	int chnum;
	int num;
	int num_dele;
	
	
	while(true)
	{
		bool flag = true;
		bool dele = true;
		system("cls");		
		menu();//打印菜单
		cout << "请选择菜单:" << endl;
		cin >> chnum;

		while (flag)
		{
			if (chnum > 6 || chnum < 0)
			{
				cout << "输入错误请重新输入" << endl;

			}
			else
			{
				flag = false;
				switch (chnum)
				{
				case 0:
					return 0;
					break;
				case 1://1、添加联系人
					addperson(&abs);
					abs.size++;
					cout << "添加成功！！" << endl;
					system("pause");
					break;
				case 2://2、显示联系人
					display(&abs);
					system("pause");
					break;
				case 3://3、删除联系人
					cout << "请输入你想删除哪个联系人序号：" << endl;
					display(&abs);
					cin >> num_dele;
					if (num_dele>0 && num_dele<=abs.size)
					{
						delete_p(&abs, num_dele);
						dele = false;
						abs.size--;
						display(&abs);
						cout << "删除成功！！" << endl;
						system("pause");
					}
					else
					{
						cout << "数据不存在，无法删除" << endl;
						system("pause");
						break;
					}
					
				
					break;
				case 4://4、查找联系人
					findperson(&abs);
					

					break;
				case 5://5、修改联系人
					change_p(&abs);
					cout << "修改后数据如下：" << endl;

					display(&abs);
					system("pause");
					break;
				case 6://6、清空联系人
					abs.size = 0;
					cout << "清空完毕!!" << endl;
					system("pause");
					break;
				default:
					break;
				}

			}
		}
	}
	return 0;
}
	
