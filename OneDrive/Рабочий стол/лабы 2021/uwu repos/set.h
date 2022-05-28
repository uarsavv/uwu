#pragma once
#ifndef set_hpp
#define set_hpp
#include <stdio.h>
#include <set>
#include <iostream>
using namespace std;
class Set {
public:
	set<int> arr;
	Set(set<int>);
	void print();
};
void operator+(Set&, Set&);
bool operator==(Set&, Set&);
bool operator!=(Set&, Set&);
void operator+=(Set&, int);
void operator-=(Set&, int);
#endif /* set_hpp */
