#pragma once
#include <iostream>
using namespace std;

class employee {
private:
	string name;
	int age;
	int salary;
	int xp;
public:
	employee();
	employee(string n, int a, int s, int x);
	void setname(string s);
	void setage(int a);
	void setsalary(int s);
	void setxp(int x);
	string getname();
	int getage();
	int getsalary();
	int getxp();
	void print();
};