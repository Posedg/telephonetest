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
		menu();//��ӡ�˵�
		cout << "��ѡ��˵�:" << endl;
		cin >> chnum;

		while (flag)
		{
			if (chnum > 6 || chnum < 0)
			{
				cout << "�����������������" << endl;

			}
			else
			{
				flag = false;
				switch (chnum)
				{
				case 0:
					return 0;
					break;
				case 1://1�������ϵ��
					addperson(&abs);
					abs.size++;
					cout << "��ӳɹ�����" << endl;
					system("pause");
					break;
				case 2://2����ʾ��ϵ��
					display(&abs);
					system("pause");
					break;
				case 3://3��ɾ����ϵ��
					cout << "����������ɾ���ĸ���ϵ����ţ�" << endl;
					display(&abs);
					cin >> num_dele;
					if (num_dele>0 && num_dele<=abs.size)
					{
						delete_p(&abs, num_dele);
						dele = false;
						abs.size--;
						display(&abs);
						cout << "ɾ���ɹ�����" << endl;
						system("pause");
					}
					else
					{
						cout << "���ݲ����ڣ��޷�ɾ��" << endl;
						system("pause");
						break;
					}
					
				
					break;
				case 4://4��������ϵ��
					findperson(&abs);
					

					break;
				case 5://5���޸���ϵ��
					change_p(&abs);
					cout << "�޸ĺ��������£�" << endl;

					display(&abs);
					system("pause");
					break;
				case 6://6�������ϵ��
					abs.size = 0;
					cout << "������!!" << endl;
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
	
