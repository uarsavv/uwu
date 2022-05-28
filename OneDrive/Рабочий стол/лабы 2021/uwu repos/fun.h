#pragma once
#include <iostream>
#include <cmath>
using namespace std;

struct Figure {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
};

void Theintegerpartofnumber(float& , float& , float&);
void Theintegerpartofnumber1(float* , float* , float* );

void reciprocalnumber(float& );
void reciprocalnumber1(float* );

void shift(Figure& , int& , int& );
void shift1(Figure* , int* , int* );

void chageStrings(int(&)[3][3], int& , int& );
void chageStrings1(int(*)[3][3], int* , int* );
