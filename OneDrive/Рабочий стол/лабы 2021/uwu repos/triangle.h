#pragma once
#ifndef triangle_hpp
#define triangle_hpp
#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
class Triangle {
public:
	int a, b, c;
	float s;
	float coors[3][2];
	Triangle(int, int, int);
	void moveVector(float, float);
	float Square();
	void print();
};
bool operator==(Triangle&, Triangle&);
bool operator!=(Triangle&, Triangle&);
bool operator>(Triangle&, Triangle&);
bool operator<(Triangle&, Triangle&);
#endif /* triangle_hpp */