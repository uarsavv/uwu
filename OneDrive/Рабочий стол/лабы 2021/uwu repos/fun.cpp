#include "fun.h"
void Theintegerpartofnumber(float& var, float& a, float& x) {
    cout << endl << "The integer part of number:" << endl;
    cout << "var = " << var << endl;
    x = var - (int)var;
    a = var - x;
    cout << "Float var = " << x << endl;
}
void Theintegerpartofnumber1(float* var, float* a, float* x) {
    cout << "The integer part of number:" << endl;
    cout << "var = " << *var << endl;
    *x = *var - (int)*var;
    *a = *var - *x;
    cout << "Float var = " << *x << endl;
}

void reciprocalnumber(float& a) {
    cout << endl << "Reciprocal number:" << endl;
    cout << "a = " << a << endl;
    a = 1 / a;
    cout << "a  = " << a << endl;
}
void reciprocalnumber1(float* a) {
    cout << "Reciprocal number:" << endl;
    cout << "a = " << *a << endl;
    *a = 1 / *a;
    cout << "a  = " << *a << endl;
}
void chageStrings1(int(*a)[3][3], int* z, int* y) {
    cout << endl << "CHANGE STRINGS:" << endl;
    cout << "Change string " << *z << " and " << *y << endl;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++)
            cout << (*a)[j][i] << " ";
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int t = (*a)[*z - 1][j];
            (*a)[*z - 1][j] = (*a)[*y - 1][j];
            (*a)[*y - 1][j] = t;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << (*a)[i][j] << " ";
        cout << endl;
    }

}

void chageStrings(int(&a)[3][3], int& z, int& y) {
    cout << endl << "CHANGE STRINGS:" << endl;
    cout << "Change string " << z << " and " << y << endl;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int t = a[z - 1][j];
            a[z - 1][j] = a[y - 1][j];
            a[y - 1][j] = t;
        }
    }
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++)
            cout << a[j][i] << " ";
        cout << endl;
    }


}

void shift(Figure& square, int& vector_x, int& vector_y) {
    cout << endl << "SHIFT SQUARE:" << endl;
    cout << "point1 = (" << square.x1 << ", " << square.y1 << ")" << endl;
    cout << "point2 = (" << square.x2 << ", " << square.y2 << ")" << endl;
    cout << "point3 = (" << square.x3 << ", " << square.y3 << ")" << endl;
    cout << "point4 = (" << square.x4 << ", " << square.y4 << ")" << endl;
    cout << "vector = (" << vector_x << ", " << vector_y << ")" << endl;

    square.x1 += vector_x;
    square.y1 += vector_y;
    square.x2 += vector_x;
    square.y2 += vector_y;
    square.x3 += vector_x;
    square.y3 += vector_y;
    square.x4 += vector_x;
    square.y4 += vector_y;

    cout << endl << "point1 = (" << square.x1 << ", " << square.y1 << ")" << endl;
    cout << "point2 = (" << square.x2 << ", " << square.y2 << ")" << endl;
    cout << "point3 = (" << square.x3 << ", " << square.y3 << ")" << endl;
    cout << "point4 = (" << square.x4 << ", " << square.y4 << ")" << endl;
}
void shift1(Figure* square, int* vector_x, int* vector_y) {
    cout << endl << "SHIFT SQUARE:" << endl;
    cout << "point1 = (" << square->x1 << ", " << square->y1 << ")" << endl;
    cout << "point2 = (" << square->x2 << ", " << square->y2 << ")" << endl;
    cout << "point3 = (" << square->x3 << ", " << square->y3 << ")" << endl;
    cout << "point4 = (" << square->x4 << ", " << square->y4 << ")" << endl;
    cout << "vector = (" << *vector_x << ", " << *vector_y << ")" << endl;

    square->x1 += *vector_x;
    square->y1 += *vector_y;
    square->x2 += *vector_x;
    square->y2 += *vector_y;
    square->x3 += *vector_x;
    square->y3 += *vector_y;
    square->x4 += *vector_x;
    square->y4 += *vector_y;

    cout << endl << "point1 = (" << square->x1 << ", " << square->y1 << ")" << endl;
    cout << "point2 = (" << square->x2 << ", " << square->y2 << ")" << endl;
    cout << "point3 = (" << square->x3 << ", " << square->y3 << ")" << endl;
    cout << "point4 = (" << square->x4 << ", " << square->y4 << ")" << endl;
}