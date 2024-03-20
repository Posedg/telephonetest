#include<iostream>
#include"contect.h"
using namespace std;
//deleteº¯ÊýÓÐÈ±ÏÝ
void delete_p(addbook *abs,int &num) 
{
	for(int i =num-1;i<abs->size-1;i++)
	{
	abs->perarray[i] = abs->perarray[i + 1];		
	}
}
