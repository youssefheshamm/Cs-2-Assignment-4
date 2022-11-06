#pragma once
#include <iostream>
#include"employee.h"
using namespace std;

class Hash_array {
private:
	int size;
	int numofelements;
	employee* table;
	int hash(int x);
public:
	Hash_array(int n);
	void insert(employee x);
	void remove(employee x);
	void print();
	float collisions();

};
