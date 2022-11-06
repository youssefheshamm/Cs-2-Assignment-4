#include<iostream>
#include "array_hash.h"

Hash_array::Hash_array(int n) {
	size = n;
	numofelements = 0;
	table = new employee[size];
	for (int i = 0; i < size; i++) {
		table[i].setage(-1);
	}
}
int Hash_array::hash(int x) {
	return x % size;
}

void Hash_array::insert(employee x) {
	int h;
	h = hash(x.getage());
	if (table[h].getage() == -1) {
		table[h] = x;
		numofelements++;
	}
	else {
		int start = h;
		while (table[h].getage() != -1) {
			h = (h + 1) % size;
			if (table[h].getage() == -1) {
				table[h] = x;
				numofelements++;
				break;
			}
			if (h == start) {
				cout << "The table is full" << endl;
				break;
			}
		}
	}
}
void Hash_array::remove(employee x) {
	int h;
	h = hash(x.getage());
	if (table[h].getage() == x.getage()) {
		table[h].setage(-1);
		numofelements--;
	}
	else {
		int start = h;
		while (table[h].getage() != x.getage()) {
			h = (h + 1) % size;
			if (table[h].getage() == x.getage()) {
				table[h].setage(-1);
				numofelements--;
				break;
			}
			if (h == start) {
				cout << "Not found" << endl;
				break;
			}
		}
	}
}
void Hash_array::print() {
	for (int i = 0; i < size; i++) {
		if (table[i].getage() != -1) {
			cout << "Name: " << table[i].getname() << ", Age: " << table[i].getage() << ", Salary: " << table[i].getsalary() << ", Experience: " << table[i].getxp() << endl;
		}
	}
}

float Hash_array::collisions() {
	//not even sure if this is correct, i was just going to count how many times a collision happened
	//but found this in a website that i will leave refrence for in the report.
	return (size * (size - 1)) / (2 * numofelements);
}