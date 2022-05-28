#include "triangle.h"
#include <math.h>
Triangle::Triangle(int _a, int _b, int _c) {
	a = _a;
	b = _b;
	c = _c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			float num = rand() % 10;
			coors[i][j] = num;
		}
	}
	float p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
}
float Triangle::Square() {
	return s;
}
void Triangle::moveVector(float x, float y) {
	for (int i = 0; i < 3; i++) {
		coors[i][0] += x;
		coors[i][1] += y;
	}
	cout << "Coordinates:";
	for (int i = 0; i < 3; i++) {
		cout << "(" << coors[i][0] << ";" << coors[i][1] << ")";
	}
	cout << "\n";
}
void Triangle::print() {
	cout << "A:" << a << "\n";
	cout << "B:" << b << "\n";
	cout << "C:" << c << "\n";
	cout << "Square:" << s << "\n";
	cout << "Coordinates:";
	for (int i = 0; i < 3; i++) {
		cout << "(" << coors[i][0] << ";" << coors[i][0] << ")";
	}
	cout << "\n\n";
}
bool operator==(Triangle& a, Triangle& b)
{
	return a.Square() == b.Square();
}
bool operator!=(Triangle& a, Triangle& b)
{
	return a.Square() != b.Square();
}
bool operator<(Triangle& a, Triangle& b)
{
	return a.Square() < b.Square();
}
bool operator>(Triangle& a, Triangle& b)
{
	return a.Square() > b.Square();
}