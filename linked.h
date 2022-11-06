#pragma once
#include<iostream>
#include "employee.h"
struct node {
	employee emp;
	node* next;
};

class Hash_linked {
private:
	int numofelements;
	node* linkedlist[9];
	int hash(int x);
public:
	Hash_linked();
	void insert(employee x);
	void remove(employee x);
	void print();
	int collision();
};
