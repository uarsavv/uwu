#include <iostream>
#include "integer.h"

using namespace std;

int main()
{
	system("chcp 65001");
	plenty a;
	a.input();
	a.print();
	plenty b = a;
	b.print();
	cout << "Set input 2: " << endl;
	b.input();
	plenty c;
	cout << "Union of sets: " << endl;
	c.Union(a, b);
	c.print();
	plenty d;
	d.intersection(a, b);
	cout << "Set intersection: " << endl;
	d.print();
	cout << "Add "<< endl;
	d.add();
	d.print();
	cout << "Location check: " << endl;
	d.check();
	d.print();
	cout << "Extraction: " << endl;
	d.remove();
	d.print();
}
