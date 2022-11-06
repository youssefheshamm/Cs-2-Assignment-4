#include <iostream>
#include "employee.h"
using namespace std;

employee::employee() {
	name = " ";
	age = 0;
	salary = 0;
	xp = 0;
}

employee::employee(string n, int a, int s, int x) {
	name = n;
	age = a;
	salary = s;
	xp = x;
}
void employee::setname(string s) {
	name = s;
}
void employee::setage(int a) {
	age = a;
}
void employee::setsalary(int s) {
	salary = s;
}
void employee::setxp(int x) {
	xp = x;
}

string employee::getname() {
	return name;
}
int employee::getage() {
	return age;
}
int employee::getsalary() {
	return salary;
}
int employee::getxp() {
	return xp;
}
void employee::print() {
	cout << "The employee's name is: " << name<<endl;
	cout << "Age: " << age << endl;
	cout << "Salary: " << salary << endl;
	cout << "Experience in years: " << xp << endl;
}