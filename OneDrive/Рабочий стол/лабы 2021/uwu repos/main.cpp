#include<iostream>
#include "triangle.h"
#include "set.h"

using namespace std;

int main() {
	cout << "Task\3\n\n";

	Triangle tr1(3, 4, 5);
	Triangle tr2(12, 10, 10);

	tr1.print();
	tr2.print();

	if (tr1 == tr2) {
		cout << "S first and second voltage triangle\n\n";
	}
	if (tr1 != tr2) {
		cout << "S first and second triangles are not equal\n\n";
	}
	if (tr1 > tr2) {
		cout << "S the first triangle is greater then the second triangle\n\n";
	}
	if (tr1 < tr2) {
		cout << "S the first triangle is less than the second triangle\n\n";
	}
	float x1, y1;
	cout << "Enter a vector value to offset the triangle(1):";
	cin >> x1 >> y1;
	tr1.moveVector(x1, y1);

	float x2, y2;
	cout << "Enter a vector value to offset the triangle(2):";
	cin >> x2 >> y2;
	tr2.moveVector(x2, y2);

	cout << "\n\nTASK 7\n\n";

	set<int> s1;
	cout << "Values of the first set:";
	for (int i = 0; i < 3; i++) {
		s1.insert(i);
	}
	Set set1(s1);
	set1.print();

	set<int> s2;
	cout << "Values of the second set:";
	for (int i = 9; i > 6; i--) {
		s2.insert(i);
	}
	Set set2(s2);
	set2.print();

	if (set1 == set2) {
		cout << "Sets are equal\n";
	}
	if (set1 != set2) {
		cout << "Sets are not equal\n";
	}
	cout << "Add 8 (to the 1st): ";
	set1 += 8;
	set1.print();

	cout << "remove 2 (into the 1st): ";
	set1 -= 2;
	set1.print();

	cout << "Adding sets 1 and 2: ";
	set1 + set2;
	set1.print();
	return 0;
}