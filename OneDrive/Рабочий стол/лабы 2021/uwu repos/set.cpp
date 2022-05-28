#include "set.h"

Set::Set(set<int> array) {
	for (int i = 0; i < 9; i++) {
		if (array.count(i) == 1)
			arr.insert(i);
	}
}
void Set::print() {
	for (int i = 0; i < 9; i++) {
		if (arr.count(i) == 1) {
			cout << i << " ";
		}
	}
	cout << "\n";
}
bool operator==(Set& a, Set& b) {
	for (int i = 0; i < 10; i++) {
		if (a.arr.count(i) != b.arr.count(i)) {
			return false;
		}
	}
	return true;
}
bool operator!=(Set& a, Set& b)
{
	for (int i = 0; i < 10; i++) {
		if (a.arr.count(i) != b.arr.count(i)) {
			return true;
		}
	}
	return false;
}
void operator+=(Set& a, int b)
{
	a.arr.insert(b);
}
void operator-=(Set& a, int b)
{
	a.arr.erase(b);
}
void operator+(Set& a, Set& b)
{
	for (int i = 0; i < 10; i++) {
		if (a.arr.count(i) == 1) {
			b.arr.insert(i);
		}
		if (b.arr.count(i) == 1) {
			a.arr.insert(i);
		}
	}
}