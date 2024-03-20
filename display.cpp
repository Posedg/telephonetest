#include<iostream>
using namespace std;
#include"contect.h"

void display(addbook *abs)
{
	int sum = abs->size;
	cout << "有" << sum << "条数据"<<endl;
	for (int i =0;i<sum;i++)
	{
		cout << i+1 << "-------";
		cout << abs->perarray[i].age<<"\t";
		cout << abs->perarray[i].name << "\t";
		cout << abs->perarray[i].sex << "\t";
		cout << abs->perarray[i].phonenum << "\t";
		cout << abs->perarray[i].address << endl;
	}

}