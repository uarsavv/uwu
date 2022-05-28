#include "fun.h"

int main() {
    float var, a, x;
    var = 15.123;
    Theintegerpartofnumber(var, a, x);
    Theintegerpartofnumber1(&var, &a, &x);

    float b;
    b = 15;
    reciprocalnumber(b);
    reciprocalnumber1(&b);

    Figure square;
    square.x1 = 0, square.y1 = 0;
    square.x2 = 4, square.y2 = 0;
    square.x3 = 4, square.y3 = 4;
    square.x4 = 0, square.y4 = 4;
    int vector_x = 5;
    int vector_y = 5;
    shift(square, vector_x, vector_y);
    shift1(&square, &vector_x, &vector_y);

    int arr[3][3] = { {1, 2, 3},
                   {4, 5, 6},
                   {7, 8 ,9} };
    int z, y;
    z = 3;
    y = 1;
    chageStrings1(&arr, &z, &y);
    cout << endl;
    chageStrings(arr, z, y);
    return 0;

}
