#include "linked.h"
#include <iostream>
using namespace std;

Hash_linked::Hash_linked() {
	numofelements = 0;
	for (int i = 0; i < 9; i++) {
		linkedlist[i] = NULL;
	}
}

int Hash_linked::hash(int x) {
	return x% 9;
}

void Hash_linked::insert(employee x) {
	node* n = new node;
	n->emp = x;
	n->next = NULL;
	int h;
	h = hash(x.getage());
	if (linkedlist[h] == NULL) {
		linkedlist[h] = n;
		numofelements++;

	}
	else {
		node* temp = linkedlist[h];
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
		numofelements++;
	}
}
void Hash_linked::remove(employee x) {
	int h;
	h = hash(x.getage());
	if (linkedlist[h] == NULL) { cout << "Element does not exist" << endl; }

	else if (linkedlist[h]->emp.getage() == x.getage()) {
		node* temp = linkedlist[h];
		linkedlist[h] = linkedlist[h]->next;
		delete temp;
		numofelements--;
	}
	else {
		node* p1 = linkedlist[h], * p2 = linkedlist[h];
		while (p2 != NULL && p2->emp.getage() != x.getage()) {
			p1 = p2;
			p2 = p2->next;
		}
		if (p2 == NULL) { cout << "Element does not exist" << endl; }
		else { p1->next = p2->next;
		delete p2;
		numofelements--;}
	}
}
void Hash_linked::print() {
	for (int i = 0; i < 9; i++) {
		if (linkedlist[i] != NULL) {
			cout << "Name: " << linkedlist[i]->emp.getname();
			cout << ", Age: " << linkedlist[i]->emp.getage();
			cout << ", Salary: " << linkedlist[i]->emp.getsalary();
			cout << ", Experience: " << linkedlist[i]->emp.getxp() << endl;
			node* temp = linkedlist[i]->next;
			while (temp != NULL) {
				cout << "Name: " << temp->emp.getname();
				cout << ", Age: " << temp->emp.getage();
				cout << ", Salary: " << temp->emp.getsalary();
				cout << ", Experience: " << temp->emp.getxp() << endl;
				temp = temp->next;
			}
		}
	}
}

int Hash_linked::collision() {
	return (9 * (9 - 1)) / (2 * numofelements);
}