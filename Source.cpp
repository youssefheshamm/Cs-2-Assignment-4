#include <iostream>
#include "employee.h"
#include "array_hash.h"
#include "linked.h"
using namespace std;

int main() {
	employee employee1("Mina", 30,10000,4);
	employee employee2("Fawzy", 45, 5000, 8);
	employee employee3("Yara", 19, 2000, 0);
	employee employee4("Mariam", 32, 8000, 2);
	employee employee5("Ayman", 33, 4000, 8);
	employee employee6("Roshdy", 28, 9000, 3);
	employee employee7("Aya", 26, 6000, 3);
	employee employee8("Abdallah", 29, 7000, 4);
	employee employee9("Fatma", 21, 3000, 1);
	Hash_array x(9);
	x.insert(employee1);
	x.insert(employee2);
	x.insert(employee3);
	x.insert(employee4);
	x.insert(employee5);
	x.insert(employee6);
	x.insert(employee7);
	x.insert(employee8);
	x.insert(employee9);
	cout << "Using a dynamic array and linear probing: " << endl;
	x.print();
	cout << "Collision rate: " << x.collisions() << endl;
	Hash_linked y;
	y.insert(employee1);
	y.insert(employee2);
	y.insert(employee3);
	y.insert(employee4);
	y.insert(employee5);
	y.insert(employee6);
	y.insert(employee7);
	y.insert(employee8);
	y.insert(employee9);
	cout << "-------------------" << endl;
	cout << "Using a linked list chaining approach" << endl;
	y.print();
	cout << "Collision rate: " << y.collision() << endl;
	return 0;
}
