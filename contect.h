#pragma once
#ifndef MY_HEADER_H  
#define MY_HEADER_H

#define max_person 1000
//�����ṹ�嶨��
struct person
{
	std::string name;//����
	int sex;//��1Ů2
	int age;
	std::string phonenum;
	std::string address;
};

struct addbook
{
	person perarray[max_person];
	int size;
};


void menu();
void addperson(addbook* abs);
void display(addbook* abs);
void delete_p(addbook* abs, int& num);
void change_p(addbook* abs);
void findperson(addbook* abs);

#endif